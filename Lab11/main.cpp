#include <iostream>

#include "./src/Cerc.hpp"

#include "./src/Util.hpp"

#include "./src/Triunghi.hpp"
#include "./src/Patrulater.hpp"
#include "./src/Pentagon.hpp"

int main() {
    Point p1(10, 20);
    Cerc* cerc = Cerc::getInstance(p1, 10);

    Point p2(2, 2);
    Point p3(15, 1);
    Point p4(20, -10);
    Point p5(25, 10);

    std::vector<Point> triPoints;

    triPoints.push_back(p1);
    triPoints.push_back(p2);
    triPoints.push_back(p3);

    Triunghi tr1(triPoints);

    std::vector<Point> patPoints;

    patPoints.push_back(p1);
    patPoints.push_back(p2);
    patPoints.push_back(p3);
    patPoints.push_back(p4);

    Patrulater pat(patPoints);

    std::vector<Point> penPoints;

    penPoints.push_back(p1);
    penPoints.push_back(p2);
    penPoints.push_back(p3);
    penPoints.push_back(p4);
    penPoints.push_back(p5);

    Pentagon pen(penPoints);

    std::cout << "OK" << std::endl;

    std::cout << "Ii in cerc: " << inCerc(cerc, tr1) << std::endl;
    std::cout << "Ii in cerc: " << inCerc(cerc, pat) << std::endl;
    std::cout << "Ii in cerc: " << inCerc(cerc, pen) << std::endl;

    return 0;
}