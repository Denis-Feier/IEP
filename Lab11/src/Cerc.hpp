//
// Created by denisu on 12/22/20.
//

#ifndef IEP_CERC_HPP
#define IEP_CERC_HPP

#include "./Point.hpp"

class Cerc {
private:
    Point& p;
    float raza;
    static Cerc* instance;
    Cerc(Point& p, float raza);
public:
    static Cerc* getInstance(Point& p, float raza);
    Point& getPoint() const;
    float getRaza() const;
};

#endif //IEP_CERC_HPP
