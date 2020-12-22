#ifndef IEP_UTIL_HPP
#define IEP_UTIL_HPP

#include <math.h>
#include <vector>
#include <math.h>

#include "./Cerc.hpp"

template<class X>
float pantaDreptei(const X& p1, const X& p2) {

    float x1 = 0;
    x1 = p1.getX();

    float x2 = 0;
    x2 = p2.getX();

    float y1 = 0;
    y1 = p1.getY();

    float y2 = 0;
    y2 = p2.getY();

    return (y2 - y1) / (x2 - x1);
};

template<class X>
float distantaDintrePuncte(const X& p1, const X& p2) {

    float x1 = 0;
    x1 = p1.getX();

    float x2 = 0;
    x2 = p2.getX();

    float y1 = 0;
    y1 = p1.getY();

    float y2 = 0;
    y2 = p2.getY();

    float pow1 = (x1 - x2) * (x1 - x2);
    float pow2 = (y1 - y2) * (y1 - y2);
    return sqrt(pow1 + pow2);
};

template<class X>
bool inCerc(const Cerc* cerc, const X& p2) {
    std::vector<Point>& points = p2.getPoints();

    bool isIn = false;

    for (auto& it : points) {
        Point& p = it;
        float x = p.getX();
        float y = p.getY();

        Point& centru = cerc->getPoint();
        float raza = cerc->getRaza();

        float a = centru.getX();
        float b = centru.getY();

        isIn = pow(x - a, 2) - pow(y - b, 2) <= pow(raza, 2);
    }

    return isIn;
};

#endif //IEP_UTIL_HPP
