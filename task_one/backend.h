#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QStringList>
#include <QRandomGenerator>

class Backend : public QObject
{
    Q_OBJECT

public:
    explicit Backend(QObject *parent = nullptr);

public slots:
    QString getRandomPhrase();

signals:
    void phraseChanged(QString newPhrase);

private:
    QStringList m_phrases;
};

#endif
