#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <stdlib.h>
# include <iomanip>
# include <stdint.h>
# include <float.h>
# include <limits>

class   Conversion
{
    private:

    Conversion();

    static void     convertInt(char *s);
    static void     convertChar(char *s);
    static void     convertFloat(char *s);
    static void     convertDouble(char *s);

    public:
    Conversion(char *toConvert);
    ~Conversion();
};

#endif