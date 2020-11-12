#include <iostream>
#include <memory>

#include "BrawlerFactory.hpp"


int main() {
    
    std::shared_ptr<BrawlerFactory> generation1();

    std::shared_ptr<BrawlerFactory> generation2();

    arenaFight(10, generation1.get(), generation2.get());

    return 0;
}

void arenaFight(int fights, BrawlerFactory* fac1, BrawlerFactory* fac2) {

}