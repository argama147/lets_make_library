#include <iostream>
#include "word.h"

using namespace std;

Word::~Word() {
    cout << "called Destructor" << endl;
}

const char* Word::getWord() {
    return "Hello,World!";
}

extern "C" {
    Word* createInstance() {
        cout << "called createInstance()" << endl;
        return new Word;
    }

    void deleteInstance(Word* p) {
        cout << "called deleteInstance()" << endl;
        delete p;
    }
}

