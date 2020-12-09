#include "Gaina.hpp"

void Gaina::sunet() {
    std::cout << "cot cot codac\n";
}

void Gaina::zboara() {
    std::cout << "I can fly only 10 meters\n";
}

Gaina::Gaina() {}

int Gaina::nrOfInstances = 0;

Gaina * Gaina::create() {
    if (nrOfInstances < 30) {
        nrOfInstances++;
        return new Gaina();
    } else {
        return nullptr;
    }
}

Gaina::~Gaina() {
    decrement();
}

void Gaina::decrement() {
    nrOfInstances--;
}