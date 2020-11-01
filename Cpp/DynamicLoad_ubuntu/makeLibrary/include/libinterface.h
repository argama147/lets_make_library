#ifndef INTERFACE_HPP
#define INTERFACE_HPP

class LibInterface {
public:
    LibInterface(){}
    virtual ~LibInterface() {}
    virtual const char* getWord() = 0;
};


extern "C" {
    LibInterface* createInstance();
    void deleteInstance(LibInterface* p);
}

typedef LibInterface* create_t();
typedef void destroy_t(LibInterface*);

#endif // INTERFACE_HPP
