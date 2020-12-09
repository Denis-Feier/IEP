#include "Pasare.hpp"
#include "Gaina.hpp"

#ifndef IEP_STRUT_HPP
#define IEP_STRUT_HPP

class Strut: public Pasare
{
private:
    static Strut * instance;
    int nrOfGaini;
    Strut();
    Strut(Strut const&);
    void operator=(Strut const&);
public:
    static Strut * getInstance();
    void zboara();
    void sunet();
    Strut& operator+ (const Gaina& other);
    int getGaini();
};

#endif //IEP_STRUT_HPP