#include "ListaNote.hpp"

ListaNote::ListaNote(std::vector<float> note) : m_note(note) {}

ListaNote::ListaNote(const ListaNote& note): m_note(*(new std::vector<float>(note.m_note))) {}

float ListaNote::calculMedie() {
    float acc = 0;

    for (unsigned int i = 0; i < m_note.size(); i++) {
        acc += m_note[i];
    }

    return acc / m_note.size();
}

std::vector<float>& ListaNote::getNote() {
    return m_note;
}

ListaNote& ListaNote::operator= (const ListaNote &sec) {


    if (this == &sec)
        return *this;

    std::vector<float>* temp = new std::vector<float>(sec.m_note);

    m_note = *temp;

    return *this;
}