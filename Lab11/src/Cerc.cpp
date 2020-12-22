//
// Created by denisu on 12/22/20.
//

#include "Cerc.hpp"

Cerc* Cerc::instance = nullptr;

Cerc* Cerc::getInstance(Point& p, float raza) {
    if (instance == nullptr) {
        instance = new Cerc(p, raza);
    }
    return instance;
};

Cerc::Cerc(Point& p, float raza):p(p), raza(raza) {};

Point & Cerc::getPoint() const {
    return p;
};

float Cerc::getRaza() const {
    return raza;
};