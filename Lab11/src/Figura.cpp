#include "./Figura.hpp"

Figura::Figura(std::vector<Point>& points): points(points) {};

std::vector<Point>& Figura::getPoints() const {
    return points;
}