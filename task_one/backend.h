#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QStringList>
#include <QRandomGenerator>
#include <QQmlEngine>

class Backend : public QObject
{
    Q_OBJECT

    QML_ELEMENT

public:
    explicit Backend(QObject *parent = nullptr);
    Q_INVOKABLE QString GetRandomPhrase();

private:
    QStringList m_phrases;

};

#endif // BACKEND_H
