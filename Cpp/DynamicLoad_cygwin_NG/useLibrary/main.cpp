#include <dlfcn.h>
#include <iostream>
#include "main.h"
#include "word.h"

using namespace std;

#define LIB_NAME(name) #name LIB_EXT

int main(void)
{
    void *handle = dlopen(LIB_NAME(hello), RTLD_LAZY);
    if (handle != NULL)
    {
        dlerror();

        cout << "dlopen() success" << endl;

        create_t* create_handle = (create_t*) dlsym(handle, "create");
        const char* dlsym_error = dlerror();
        if (dlsym_error) {
            cerr << "Cannot load symbol create: " << dlsym_error << endl;
            return 1;
        }
        cout << "get create() handle success" << endl;

        destroy_t* destroy_handle = (destroy_t*) dlsym(handle, "destroy");
        dlsym_error = dlerror();
        if (dlsym_error) {
            cerr << "Cannot load symbol destroy: " << dlsym_error << endl;
            return 1;
        }
        cout << "get destroy() handle success" << endl;

        if (create_handle != NULL) {
            Word* word = (Word*) create_handle();

            cout << word->getWord() << endl;

            destroy_handle(word);
        } else {
            fprintf(stderr, "dlsym:%s\n", dlerror());
        }
        dlclose(handle);
        cout << "dlclose()" << endl;
    } else {
        cerr << "dlopen error:" << dlerror() << endl;
    }

    return 0;
}
