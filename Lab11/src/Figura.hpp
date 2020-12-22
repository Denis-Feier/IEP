#ifndef IEP_FIGURA_HPP
#define IEP_FIGURA_HPP

#include<vector>

#include "./Point.hpp"

class Figura {
    protected:
        std::vector<Point>& points;
    public:
        Figura(std::vector<Point>& points);
        virtual float perimetru() = 0;
        std::vector<Point>& getPoints() const;
};


#endif //IEP_FIGURA_HPP
