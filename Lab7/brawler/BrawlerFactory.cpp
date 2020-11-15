#include "BrawlerFactory.hpp"

BrawlerFactory::BrawlerFactory(): max(10), min(20) {};


// Item 21: Don’t try to return a reference when you must return an object.
Brawler BrawlerFactory::get() {
    return Brawler::createBrawler(max, min);;
}

// void BrawlerFactory::generate() {
//     en = &Brawler::createBrawler(max, min);
// }

void BrawlerFactory::setMax(int val) {
    max = val;
}

void BrawlerFactory::setMin(int val) {
    min = val;
}