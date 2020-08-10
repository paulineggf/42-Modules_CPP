#ifndef BUREAUCRATEXCEPTION_HPP
# define BUREAUCRATEXCEPTION_HPP

# include <iostream>
# include <exception>

class       MyException
{
    public:
    class       GradeTooHighException : public std::exception
    {
        private:
        std::string     _str;

        public:
        GradeTooHighException() :
        _str("Grade Too High Exception") {}

        ~GradeTooHighException() throw() {}
        
        const char* what() const throw()
        {
            return _str.c_str();
        }
    };

    class       GradeTooLowException : public std::exception
    {
        private:
        std::string     _str;

        public:
        GradeTooLowException() :
        _str("Grade Too Low Exception") {}

        ~GradeTooLowException() throw() {}

        const char* what() const throw()
        { 
            return _str.c_str();
        }
    };
};

# endif