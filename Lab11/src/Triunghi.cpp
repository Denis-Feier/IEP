#include "./Triunghi.hpp"

Triunghi::Triunghi(std::vector<Point>& points): Figura(points) {};

float Triunghi::perimetru() {

    Point& p1 = points[0];
    Point& p2 = points[1];
    Point& p3 = points[2];

    return Util::distantaDintrePuncte(p1, p2) + Util::distantaDintrePuncte(p2, p3) + Util::distantaDintrePuncte(p3, p1);
};