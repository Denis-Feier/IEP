//
// Created by denisu on 12/17/20.
//

#include "./Util.hpp"


template<typename X>
float Util<X>::pantaDreptei(const X& p1, const X& p2) {

    float x1 = 0;
    x1 = p1.getX();

    float x2 = 0;
    x2 = p2.getX();

    float y1 = 0;
    y1 = p1.getY();

    float y2 = 0;
    y2 = p2.getY();

    return (y2 -y1) / (x2 - x1);
};

template<typename X>
float Util<X>::distantaDintrePuncte(const X& p1, const X& p2) {

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
    return sqrt(pow1, pow2);
};