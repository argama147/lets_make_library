#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include "make_library_global.h"

class MAKE_LIBRARY_EXPORT LibInterface {
public:
    LibInterface(){}
    virtual ~LibInterface() {}
    virtual const char* getWord() = 0;
};


extern "C" {
    LibInterface* MAKE_LIBRARY_EXPORT createInstance();
    MAKE_LIBRARY_EXPORT void deleteInstance(LibInterface* p);
}

typedef LibInterface* create_t();
typedef void destroy_t(LibInterface*);

#endif // INTERFACE_HPP
