#include <iostream>
#include <windows.h>
#include "main.h"
#include "word.h"

using namespace std;

#define LIB_NAME(name) #name LIB_EXT

int main(void)
{
    HMODULE hModule = LoadLibrary(LIB_NAME(hello));
    if (hModule != NULL)
    {
        cout << "LoadLibrary() success" << endl;

        create_t* createHandle = (create_t*) (GetProcAddress(hModule, "createInstance"));
        if (!createHandle) {
            cerr << "Cannot load symbol createInstance" << endl;
            return 1;
        }
        cout << "GetProcAddress createInstance() success" << endl;

        destroy_t* destroyHandle = (destroy_t*) (GetProcAddress(hModule, "deleteInstance"));
        if (!destroyHandle) {
            cerr << "Cannot load symbol deleteInstance" << endl;
            return 1;
        }
        cout << "GetProcAddress deleteInstance() success" << endl;

        Word* pWord = dynamic_cast<Word*>(createHandle());
        cout << pWord->getWord() << endl;

        destroyHandle(pWord);
        FreeLibrary(hModule);
        cout << "FreeLibrary()" << endl;
    } else {
        cerr << "LoadLibrary error" << endl;
    }

    return 0;
}
