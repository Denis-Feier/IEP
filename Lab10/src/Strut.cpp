#include "Strut.hpp"


Strut::Strut(): nrOfGaini(0) {}

//Strut::in
Strut * Strut::instance = nullptr;

Strut * Strut::getInstance() {
    if (!instance)
        instance = new Strut;
    return instance;
}

void Strut::zboara() {
    std::cout << "I can fly\n";
}

void Strut::sunet() {
    std::cout << "I cant make sounds\n";
}

Strut & Strut::operator+(const Gaina &other) {
    Strut::getInstance()->nrOfGaini++;
    Gaina::decrement();
    return *Strut::getInstance();
}

int Strut::getGaini() {
    return nrOfGaini;
}