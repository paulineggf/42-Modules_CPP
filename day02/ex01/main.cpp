#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "a raw: " << a.getRawBits() << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "b raw: " << b.getRawBits() << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "c raw: " << c.getRawBits() << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "d raw: " << d.getRawBits() << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toFloat() << " as float" << std::endl;
    a.setRawBits(b.getRawBits());
    std::cout << "a is " << a << std::endl;
    std::cout << "a raw: " << a.getRawBits() << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    return 0;
}