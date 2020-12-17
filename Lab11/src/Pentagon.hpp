#ifndef IEP_PENTAGON_HPP
#define IEP_PENTAGON_HPP

#include "./Figura.hpp"

class Pentagon: Figura{
    public:
        Pentagon(std::vector<Point>& points);
        float perimetru();
};


#endif //IEP_PENTAGON_HPP
