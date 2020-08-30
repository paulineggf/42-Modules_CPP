#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(5.05f);
    Fixed d(2);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << "max: " << Fixed::max(a, b) << std::endl;
    std::cout << "min: " << Fixed::min(a, b) << std::endl;
    std::cout << "max: " << Fixed::max(a, c) << std::endl;
    std::cout << "min: " << Fixed::min(a, c) << std::endl;

    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;

    std::cout << "b float: " << b.toFloat() << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "d - c = " << d - c << std::endl;
    if (d != c)
        std::cout << "d != c = true" << std::endl;
    else
        std::cout << "d != c = false" << std::endl;
    if (d == c)
        std::cout << "d == c = true" << std::endl;
    else
        std::cout << "d == c = false" << std::endl;
    std::cout << "d * c = " << d * c << std::endl;
    std::cout << "d / c = " << d / c << std::endl;
    if (d > c)
        std::cout << "d > c = true" << std::endl;
    else
        std::cout << "d > c = false" << std::endl;
    if (d < c)
        std::cout << "d < c = true" << std::endl;
    else
        std::cout << "d < c = false" << std::endl;

    if (d >= c)
        std::cout << "d >= c = true" << std::endl;
    else
        std::cout << "d >= c = false" << std::endl;

    if (d <= c)
        std::cout << "d <= c = true" << std::endl;
    else
        std::cout << "d <= c = false" << std::endl;


    return 0;
}