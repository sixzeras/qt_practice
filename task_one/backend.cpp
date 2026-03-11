#include <backend.h>

Backend::Backend(QObject *parent)
    : QObject(parent)
{
    m_phrases << "Привет!"
              << "Hello!"
              << "Hola!"
              << "հի!";
}

QString Backend::GetRandomPhrase()
{
    if (m_phrases.isEmpty()) {
        return "Фраз нет";
    }

    int index = QRandomGenerator::global()->bounded(m_phrases.size());
    return m_phrases.at(index);
}
