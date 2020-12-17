#ifndef IEP_PENTAGON_HPP
#define IEP_PENTAGON_HPP

#include "./Figura.hpp"

class Pentagon: Figura{
    public:
        Pentagon(Point& p1, Point& p2, Point& p3, Point& p4, Point& p5);
        float perimetru();
};


#endif //IEP_PENTAGON_HPP
