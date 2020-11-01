#include <windows.h>
#include <stdio.h>

#include "word.h"

typedef char* (*Func)();

int main(void)
{
    HMODULE hModule = LoadLibrary("hello.dll");
    if (hModule) {
        Func func = (Func)GetProcAddress(hModule, "getWord");
        if (func) {
            char* str = func();
            printf("%s\n", str);
        } else {
            printf("funs is NULL.\n");
        }
        FreeLibrary(hModule);
    } else {
        printf("hModule is NULL.\n");
    }
}

