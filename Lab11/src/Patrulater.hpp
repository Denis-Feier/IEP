#ifndef IEP_PATRULATER_HPP
#define IEP_PATRULATER_HPP

#include "./Figura.hpp"
#include "./Util.hpp"

class Patrulater: Figura{
    public:
        Patrulater(std::vector<Point>& points);
        float perimetru();
};


#endif //IEP_PATRULATER_HPP
