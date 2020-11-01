#include <QCoreApplication>
#include <QDebug>

#include "word.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Word* word = new Word();
    qDebug() << word->getWord();
    delete word;

    return a.exec();
}
