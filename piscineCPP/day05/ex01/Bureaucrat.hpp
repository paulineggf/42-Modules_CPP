 #ifndef BUREAUCRAT_HPP
 # define BUREAUCRAT_HPP

# include <iostream>
# include "MyException.hpp"

class   Bureaucrat : public MyException
{
    private:
    std::string const   _name;
    int                 _grade;

    
    protected:
    Bureaucrat();
    
    public:
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat          &operator=(Bureaucrat const &);
    ~Bureaucrat();

    void                setGrade(int grade);
    std::string const   getName();
    int                 getGrade();

    void                increaseGrade();
    void                decreaseGrade();

};

 #endif