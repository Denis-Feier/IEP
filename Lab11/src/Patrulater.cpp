#include "./Patrulater.hpp"

Patrulater::Patrulater(Point& p1, Point& p2, Point& p3, Point& p4): Figura({p1, p2, p3, p4}) {};

float Patrulater::perimetru() {

    Point& p1 = points[0];
    Point& p2 = points[1];
    Point& p3 = points[2];
    Point& p4 = points[3];

    return  distantaDintrePuncte(p1, p2) +
            distantaDintrePuncte(p2, p3) +
            distantaDintrePuncte(p3, p4) +
            distantaDintrePuncte(p4, p1);
};