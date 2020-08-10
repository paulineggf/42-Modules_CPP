#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <stdlib.h>
# include <iomanip>

class   Conversion
{
    private:

    Conversion();

    static void     convertInt(std::string s);
    static void     convertChar(std::string s);
    static void     convertFloat(std::string &s);
    static void     convertDouble(std::string &s);

    public:
    Conversion(std::string toConvert);
    ~Conversion();
};

#endif