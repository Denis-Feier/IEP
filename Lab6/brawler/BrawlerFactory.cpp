#include "BrawlerFactory.hpp"

BrawlerFactory::BrawlerFactory(): max(10), min(20), en(Brawler::createBrawler(10, 20)) {};

Brawler* BrawlerFactory::get() {
    return en;
}

void BrawlerFactory::generate() {
    en = Brawler::createBrawler(max, min);
}

void BrawlerFactory::setMax(int val) {
    max = val;
}

void BrawlerFactory::setMin(int val) {
    min = val;
}