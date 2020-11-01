#include <QDebug>
#include "word.h"

using namespace std;

Word::Word() {
    qDebug() << "called Word Constructor";
}

Word::~Word() {
    qDebug() << "called Word Destructor";
}

const char* Word::getWord() {
    return "Hello,World!";
}

extern "C" {
    LibInterface* createInstance() {
        qDebug() << "called createInstance()";
        return new Word;
    }

    void deleteInstance(LibInterface* p) {
        qDebug() << "called deleteInstance()";
        delete p;
    }
}
