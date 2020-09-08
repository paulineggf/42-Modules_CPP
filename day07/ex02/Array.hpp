#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T>
class   Array
{
    private:
    T       *_a;
    int     _nbArray;

    public:
    Array() :
    _nbArray(0),
    _a(nullptr) {
    }
    
    Array(unsigned int n) :
    _nbArray(n)
    {
        _a = new T[n];
    }

    ~Array()
    {
        delete [] _a;
    }

    Array(Array const &rhs)
    {
        int i;

        i = 0;
        _nbArray = rhs._nbArray;
        _a = new T[_nbArray];
        while (i < _nbArray)
        {
            _a[i] = rhs._a[i];
            i++;
        }
    }

    Array<T>   &operator=(Array<T>  &rhs)
    {
        int i;

        i = 0;
        _nbArray = rhs.size();
        _a = new T[_nbArray];
        while (i < _nbArray)
        {
            _a[i] = rhs._a[i];
            i++;
        }
        return *this;
    }

    T          &operator[](int idx)
    {
        if (!_a || idx >= _nbArray || idx < 0)
            throw std::exception();
        else
            return _a[idx];
    }

    int         size()
    {
        return _nbArray;
    }

};

#endif