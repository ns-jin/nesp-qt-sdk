#ifndef NESPQTSDK_GLOBAL_H
#define NESPQTSDK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NESPQTSDK_LIBRARY)
#  define NESPQTSDKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NESPQTSDKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NESPQTSDK_GLOBAL_H
