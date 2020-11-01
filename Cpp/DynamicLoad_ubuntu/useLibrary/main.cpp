#include "word.h"

#include <dlfcn.h>
#include <iostream>
#include "main.h"

using namespace std;

#define LIB_NAME(name) #name LIB_EXT

int main(void)
{
    void *handle = dlopen(LIB_NAME(hello), RTLD_LAZY);
    if (handle != NULL)
    {
        dlerror();

        cout << "dlopen() success" << endl;

        create_t* createHandle = (create_t*) dlsym(handle, "createInstance");
        const char* dlsym_error = dlerror();
        if (dlsym_error) {
            cerr << "Cannot load symbol createInstance: " << dlsym_error << endl;
            return 1;
        }
        cout << "get createInstance() handle success" << endl;

        destroy_t* destroyHandle = (destroy_t*) dlsym(handle, "deleteInstance");
        dlsym_error = dlerror();
        if (dlsym_error) {
            cerr << "Cannot load symbol deleteInstance: " << dlsym_error << endl;
            return 1;
        }
        cout << "get deleteInstance() handle success" << endl;

//        Word* pWord = dynamic_cast<Word*>(createHandle());
        LibInterface* pWord = createHandle();
        cout << pWord->getWord() << endl;

        destroyHandle(pWord);
        dlclose(handle);
        cout << "dlclose()" << endl;
    } else {
        cerr << "dlopen error:" << dlerror() << endl;
    }

    return 0;
}
