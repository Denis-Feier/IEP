#include "./Patrulater.hpp"
#include "./Util.hpp"

Patrulater::Patrulater(std::vector<Point>& points): Figura(points) {};

float Patrulater::perimetru() {

    Point& p1 = points[0];
    Point& p2 = points[1];
    Point& p3 = points[2];
    Point& p4 = points[3];

    return  Util<Point>::distantaDintrePuncte(p1, p2) +
            Util<Point>::distantaDintrePuncte(p2, p3) +
            Util<Point>::distantaDintrePuncte(p3, p4) +
            Util<Point>::distantaDintrePuncte(p4, p1);
};