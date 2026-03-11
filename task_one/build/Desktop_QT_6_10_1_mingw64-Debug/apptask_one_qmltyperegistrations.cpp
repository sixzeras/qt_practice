/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<backend.h>)
#  include <backend.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_task_one()
{
    qmlRegisterModule("task_one", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<Backend>("task_one", 254);
    QT_WARNING_POP
    qmlRegisterModule("task_one", 254, 254);
}

static const QQmlModuleRegistration taskoneRegistration("task_one", qml_register_types_task_one);
