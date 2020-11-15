#include "Brawler.hpp"

class BrawlerFactory {

    // Item 22: Declare data members private.
private:
    BrawlerFactory(const BrawlerFactory&);
    BrawlerFactory& operator=(const BrawlerFactory&);
    Brawler* en;
    int max;
    int min;
public:
    BrawlerFactory();
    Brawler* get();
    void generate();
    void setMax(int val);
    void setMin(int val);
};