#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(std::string toConvert)
{
    Conversion::convertChar(toConvert);
    Conversion::convertInt(toConvert);
    Conversion::convertFloat(toConvert);
    Conversion::convertDouble(toConvert);
}

Conversion::~Conversion() {}

void     Conversion::convertInt(std::string s)
{
    std::stringstream   degree(s);
    int                 x;

    std::cout << "Int: ";
    try
    {
        degree >> x;
        if (degree.fail())
            throw 1;
        std::cout << x << std::endl;
    }
    catch (...)
    {
        std::cout << "impossible" << std::endl;
    }
}

void    Conversion::convertChar(std::string s)
{
    std::stringstream   degree(s);
    char                c;
    int                 x;

    std::cout << "Char: ";
    try
    {   
        degree >> x;
        if (degree.fail())
            throw 'c';
        if (x <= 31 || x > 127)
            throw 1;
        c = x;
        std::cout << "'" << c << "'" << std::endl;
        
    }
    catch(int i)
    {
        std::cout << "Non displayable" << std::endl;
    }
    catch(char c)
    {
        std::cout << "impossible" << std::endl;
    }
    
}

void   Conversion::convertFloat(std::string &s)
{
    std::stringstream       degree(s);
    float                   x;
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: ";
    try
    {
        degree >> x;
        if (degree.fail())
            throw 1;
        std::cout << x << "f" << std::endl;
    }
    catch (...)
    {
        std::cout << "nanf" << std::endl;
    }
}

void  Conversion::convertDouble(std::string &s)
{
    std::stringstream       degree(s);
    double                  x;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double: ";
    try
    {
        degree >> x;
        if (degree.fail())
            throw 1;
        std::cout << x << std::endl;
    }
    catch (...)
    {
        std::cout << "nan" << std::endl;
    }
}

