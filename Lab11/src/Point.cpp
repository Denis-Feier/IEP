#include "./Point.hpp"

Point::Point(float x, float y): x(x), y(y) {};

float Point::getX() {
    return x;
};

float Point::getY() {
    return y;
};

template<typename X>
float pantaDreptei(const X& p1, const X& p2) {
    
    float x1 = 0; 
    x1 = ((Point) p1).getX();

    float x2 = 0; 
    x2 = ((Point) p2).getX();

    float y1 = 0; 
    y1 = ((Point) p1).getY();
    
    float y2 = 0; 
    y2 = ((Point) p2).getY();

    return (y2 -y1) / (x2 - x1);  
};

template<typename X>
float distantaDintrePuncte(const X& p1, const X& p2) {
    
    float x1 = 0; 
    x1 = ((Point) p1).getX();

    float x2 = 0; 
    x2 = ((Point) p2).getX();

    float y1 = 0; 
    y1 = ((Point) p1).getY();
    
    float y2 = 0; 
    y2 = ((Point) p2).getY();

    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
};