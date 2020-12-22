#include "Pentagon.hpp"

Pentagon::Pentagon(std::vector<Point>& points): Figura(points) {};

float Pentagon::perimetru() {

    Point& p1 = points[0];
    Point& p2 = points[1];
    Point& p3 = points[2];
    Point& p4 = points[3];
    Point& p5 = points[4];

    return  distantaDintrePuncte<Point>(p1, p2) +
            distantaDintrePuncte<Point>(p2, p3) +
            distantaDintrePuncte<Point>(p3, p4) +
            distantaDintrePuncte<Point>(p4, p5) +
            distantaDintrePuncte<Point>(p5, p1);
};