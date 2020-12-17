#include "./Triunghi.hpp"

Triunghi::Triunghi(Point& p1, Point& p2, Point& p3): Figura({p1, p2, p3}) {};

float Triunghi::perimetru() {

    Point& p1 = points[0];
    Point& p2 = points[1];
    Point& p3 = points[2];

    return distantaDintrePuncte(p1, p2) + distantaDintrePuncte(p2, p3) + distantaDintrePuncte(p3, p1);
};