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

Span::Span(Span const &copy)
{
    _Nmax = copy._Nmax;
    _N = copy._N;
    _tab = copy._tab;
}

Span &Span::operator=(Span const &rhs)
{
    _Nmax = rhs._Nmax;
    _N = rhs._N;
    _tab = rhs._tab;
    return *this;
}

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

void    Span::addNumber(int n1, int n2)
{
    try
    {
        if (n1 >= n2)
            throw std::exception();
        while (n1 < n2)
        {
            if (_N == _Nmax)
                throw std::exception();
            _tab[_N] = n1;
            _N += 1;
            n1++;
        }
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