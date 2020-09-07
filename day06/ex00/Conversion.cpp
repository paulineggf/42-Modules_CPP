#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(char *toConvert)
{
    Conversion::convertChar(toConvert);
    Conversion::convertInt(toConvert);
    Conversion::convertFloat(toConvert);
    Conversion::convertDouble(toConvert);
}

Conversion::~Conversion() {}


void     Conversion::convertInt(char *s)
{
    char        c;
    double      x;

    std::cout << "Int: ";
    if (sscanf(s, "%lf", &x) == 1)
    {
        if (x >= INT_MIN && x <= INT_MAX)
            std::cout << static_cast<int>(x) << std::endl;
        else
            std::cout << "impossible" << std::endl;
    }
    else if (sscanf(s, "%c", &c) == 1)
    {
        if (std::strlen(s) > 1)
            std::cout << "impossible" << std::endl;
        else if (c > 31 && c <= 127)
            std::cout << static_cast<int>(c) << std::endl;
    }
}

void    Conversion::convertChar(char *s)
{
    char        c;
    double      x;
    std::string str = s;

    std::cout << "Char: ";
    if (sscanf(s, "%lf", &x) == 1)
    {
        if (str.compare("nan") == 0 || str.compare("nanf") == 0)
            std::cout << "impossible" << std::endl;
        else if (x > 31 && x <= 127)
            std::cout << "'" << static_cast<char>(x) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else if (std::strlen(s) > 1)
        std::cout << "impossible" << std::endl;
    else if (sscanf(s, "%c", &c) == 1)
        std::cout << "'" << c << "'" << std::endl;
}

void   Conversion::convertFloat(char *s)
{
    char        c;
    float       x;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Float: ";
    if (sscanf(s, "%f", &x) == 1)
        std::cout << x << "f" << std::endl;
    else if (sscanf(s, "%c", &c) == 1)
    {
        if (std::strlen(s) > 1)
            std::cout << "impossible" << std::endl;
        else if (c > 31 && c <= 127)
            std::cout << static_cast<float>(c) << "f" << std::endl;
    }
}

void  Conversion::convertDouble(char *s)
{
    char        c;
    double      x;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Double: ";
    if (sscanf(s, "%lf", &x) == 1)
        std::cout << x << std::endl;
    else if (sscanf(s, "%c", &c) == 1)
    {
        if (std::strlen(s) > 1)
            std::cout << "impossible" << std::endl;
        else if (c > 31 && c <= 127)
            std::cout << static_cast<double>(c) << std::endl;
    }
}

