#ifndef IEP_FIGURA_HPP
#define IEP_FIGURA_HPP

#include<list>

#include "./Point.hpp"

class Figura {
    protected:
        std::list<Point>& points;
    public:
        Figura(std::list<Point>& points);
        virtual float perimetru() = 0;
};


#endif //IEP_FIGURA_HPP
