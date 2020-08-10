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
        this->_a = rhs._a;
    }

    Array<T>   &operator=(Array<T>  &rhs)
    {
        int nbArray;
        int i;

        i = 0;
        nbArray = rhs.size();
        _a = new T[nbArray];
        while (i < nbArray)
        {
            _a[i] = rhs._a[i];
            i++;
        }
        _nbArray = nbArray;
        return *this;
    }

    T          &operator[](int idx)
    {
        if (idx >= _nbArray || idx < 0 || !_a)
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