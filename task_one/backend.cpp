#include "backend.h"

Backend::Backend(QObject *parent)
    : QObject(parent)
{
    m_phrases << "Привет!"
              << "Hello!"
              << "Hola!"
              << "հի!";
}

QString Backend::getRandomPhrase()
{
    if (m_phrases.isEmpty()) {
        return "Фразы закончились!";
    }

    int index = QRandomGenerator::global()->bounded(m_phrases.size());
    QString phrase = m_phrases.at(index);

    emit phraseChanged(phrase);

    return phrase;
}
