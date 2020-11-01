#include <iostream>
#include "word.h"

using namespace std;

Word::Word() {
    cout << "called Word Constructor" << endl;
}

Word::~Word() {
    cout << "called Word Destructor" << endl;
}

const char* Word::getWord() {
    return "Hello,World!";
}

extern "C" {
    LibInterface* createInstance() {
        cout << "called createInstance()" << endl;
        return new Word;
    }

    void deleteInstance(LibInterface* p) {
        cout << "called deleteInstance()" << endl;
        delete p;
    }
}

