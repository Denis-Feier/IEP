#ifndef IEP_UTIL_HPP
#define IEP_UTIL_HPP

#include <math.h>

class Util {
public:
    template<typename X>
    static float pantaDreptei(const X &p1, const X &p2);
    template<typename X>
    static float distantaDintrePuncte(const X &p1, const X &p2);
};

#endif //IEP_UTIL_HPP
