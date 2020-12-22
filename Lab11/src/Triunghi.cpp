#include "./Triunghi.hpp"

Triunghi::Triunghi(std::vector<Point>& points): Figura(points) {};

float Triunghi::perimetru() {

    Point& p1 = points[0];
    Point& p2 = points[1];
    Point& p3 = points[2];

        return distantaDintrePuncte<Point>(p1, p2) +
                distantaDintrePuncte<Point>(p2, p3) +
                distantaDintrePuncte<Point>(p3, p1);
};