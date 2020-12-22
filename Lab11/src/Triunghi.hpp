#ifndef IEP_TRIUNGHI_HPP
#define IEP_TRIUNGHI_HPP

#include "./Figura.hpp"
#include "./Util.hpp"

class Triunghi: public Figura {
    public:
        Triunghi(std::vector<Point>& points);
        float perimetru();
};


#endif //IEP_TRIUNGHI_HPP
