#include "span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(1);
    sp.addNumber(11);
    sp.addNumber(45);

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}