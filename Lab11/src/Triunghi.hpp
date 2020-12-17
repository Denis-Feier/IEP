#ifndef IEP_TRIUNGHI_HPP
#define IEP_TRIUNGHI_HPP



#include "./Figura.hpp"

class Triunghi: Figura {
    public:
        Triunghi(Point& p1, Point& p2, Point& p3);
        float perimetru();
};


#endif //IEP_TRIUNGHI_HPP
