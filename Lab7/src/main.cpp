#include <iostream>
#include <memory>

#include "ArenaFight.hpp"

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
 
        Brawler b1 = fac1->get();

        Brawler b2 = fac2->get();
        
        ArenaFight whateverArena;

        whateverArena.calculateFightResult(b1, b2);
    }

}