#include <QCoreApplication>
#include <QLibrary>
#include <QDebug>

#include "word.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLibrary helloLib("hello");
    qDebug() << "load()";
    helloLib.load();
    if (helloLib.isLoaded()) {
        qDebug() << "Library is loaded.";
        create_t* createHandle
                = (create_t*) helloLib.resolve("createInstance");
        if (createHandle == nullptr) {
            qDebug() << "createHandle is null.";
        } else {
            LibInterface* pWord = createHandle();
            if (pWord) {
                qDebug() << pWord->getWord();
            }
            destroy_t* destroyHandle
                    = (destroy_t*) helloLib.resolve("deleteInstance");
            if (destroyHandle != nullptr) {
                destroyHandle(pWord);
            } else {
                qDebug() << "destroyHandle is null.";
            }
        }
        qDebug() << "unload()";
        helloLib.unload();
    } else {
        qDebug() << "Library is NOT loaded.";
    }

    return a.exec();
}
