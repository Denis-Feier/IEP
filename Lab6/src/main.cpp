#include <iostream>
#include <memory>

#include "../brawler/BrawlerFactory.hpp"

void arenaFight(int fights, BrawlerFactory* fac1, BrawlerFactory* fac2);

int main() {
    
    std::shared_ptr<BrawlerFactory> generation1 = std::make_shared<BrawlerFactory>();

    std::shared_ptr<BrawlerFactory> generation2 = std::make_shared<BrawlerFactory>();

    arenaFight(10, generation1.get(), generation2.get());

    return 0;
}

void arenaFight(int fights, BrawlerFactory* fac1, BrawlerFactory* fac2) {

    fac2->setMin(20);
    fac2->setMax(30);

    fac1->setMin(10);
    fac1->setMax(100);

    for (int i = 0; i < fights; i++) {
        fac1->generate();
        fac2->generate();

        Brawler * b1 = fac1->get();

        Brawler * b2 = fac2->get();

        int hit1 = b1->getHP() - b2->getDamage();
        b1->setHP(hit1);
        int hit2 = b2->getHP() - b1->getDamage();
        b2->setHP(hit2);

        if (!b1->isAlive()) {
            std::cout << "Brawler1 is down" << std::endl;
        }


        if (!b2->isAlive()) {
            std::cout << "Brawler2 is down" << std::endl;
        }

    }

}