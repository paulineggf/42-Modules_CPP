#include <exception>
#include <algorithm>
#include <iostream>
#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int N) :
_Nmax(N),
_N(0),
_tab(_Nmax, 0) {
}

Span::~Span() {}

void    Span::addNumber(int nb)
{
    try
    {
        if (_N == _Nmax)
            throw std::exception();
        _tab[_N] = nb;
        _N += 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int     Span::longestSpan()
{
    if (_N < 2)
        throw std::exception();
    std::sort(_tab.begin(), _tab.end());
    int min = _tab.at(0);
    int max = _tab.at(_tab.size() - 1);
    return max - min;
}

int     Span::shortestSpan()
{
    if (_N < 2)
        throw std::exception();
    std::nth_element(_tab.begin(), _tab.begin()+1, _tab.end());
    int min = _tab.at(0);
    int secondMin = _tab.at(1);
    return secondMin - min;
}