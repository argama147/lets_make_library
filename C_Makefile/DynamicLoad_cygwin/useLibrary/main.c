#include <dlfcn.h>
#include <stdio.h>

#include "main.h"
#include "word.h"

#define LIB_NAME(name) #name LIB_EXT

typedef char* (*Func)();

int main(void)
{
    void *handle = dlopen(LIB_NAME(hello), RTLD_LAZY);
    if (handle != NULL)
    {
        Func func = (Func) dlsym(handle, "getWord");
        if (func != NULL) {
            printf("%s\n", (*func)(0));
        } else {
            fprintf(stderr, "dlsym:%s\n", dlerror());
        }
        dlclose(handle);
    } else {
        fprintf(stderr, "dlopen:%s\n", dlerror());
    }
}

