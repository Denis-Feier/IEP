#include "ArenaFight.hpp"
#include <iostream>


//Item 20: Prefer pass-by-reference-to- const to pass-by-value.
void ArenaFight::calculateFightResult(const Brawler& b1, const Brawler& b2) {

        int hit1 = b1.getHP() - b2.getDamage();
        int hit2 = b2.getHP() - b2.getDamage();


        if (hit1 < 0) {
            std::cout << "Brawler1 is down" << std::endl;
        }


        if (hit2 < 0) {
            std::cout << "Brawler2 is down" << std::endl;
        }
};

ArenaFight::ArenaFight() {};