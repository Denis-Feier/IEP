#ifndef IEP_POINT_HPP
#define IEP_POINT_HPP



#include <iostream>
#include <math.h>

class Point {
    private:
        float x;
        float y;
    public:
        Point(float x, float y);
        float getX();
        float getY();

};

template<typename X>
float pantaDreptei(const X& p1, const X& p2);

template<typename X>
float distantaDintrePuncte(const X& p1, const X& p2);


#endif //IEP_POINT_HPP
