#include <math.h>
#include "Brawler.hpp"

int Brawler::randomGen(int max, int min) {
    return min + (rand() % static_cast<int>(max - min + 1));
};

Brawler::Brawler(int max, int min) : hp(randomGen(max, min)), damage(randomGen(max, min)) {};

Brawler* Brawler::createBrawler(int max, int min) {
    return new Brawler(max, min);
}

int Brawler::getDamage() {
    return (*this).damage;
}

int Brawler::getHP() {
    return (*this).hp;
}

bool Brawler::isAlive() {
    return hp > 0;
}

void Brawler::setHP(int val) {
    hp = val;
}