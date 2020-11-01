#include "word.h"
#include "decoration.h"

Word::Word()
{
}

const char* Word::getWord()
{
    Decoration decoration;
    QString deco = decoration.getDecoration();
    QString str = "Hello,World!";
    deco += str;
    return deco.toLocal8Bit().constData();
}
