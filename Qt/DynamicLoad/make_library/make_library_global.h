#ifndef MAKE_LIBRARY_GLOBAL_H
#define MAKE_LIBRARY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MAKE_LIBRARY_LIBRARY)
#  define MAKE_LIBRARY_EXPORT Q_DECL_EXPORT
#else
#  define MAKE_LIBRARY_EXPORT Q_DECL_IMPORT
#endif

#endif // MAKE_LIBRARY_GLOBAL_H
