#ifndef IEP_PATRULATER_HPP
#define IEP_PATRULATER_HPP

#include "./Figura.hpp"

class Patrulater: Figura{
    public:
        Patrulater(Point& p1, Point& p2, Point& p3, Point& p4);
        float perimetru();
};


#endif //IEP_PATRULATER_HPP
