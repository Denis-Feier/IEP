#include "Pasare.hpp"

class Gaina: public Pasare
{
private:
    static int nrOfInstances;
    Gaina();
public:
    ~Gaina();
    void zboara();
    void sunet();
    static Gaina * create();
    static void decrement();
};

