#include "./Triunghi.hpp"
#include "./Util.hpp"

Triunghi::Triunghi(std::vector<Point>& points): Figura(points) {};

float Triunghi::perimetru() {

    Point& p1 = points[0];
    Point& p2 = points[1];
    Point& p3 = points[2];

    return Util<Point>::distantaDintrePuncte(p1, p2) + Util<Point>::distantaDintrePuncte(p2, p3) + Util<Point>::distantaDintrePuncte(p3, p1);
};