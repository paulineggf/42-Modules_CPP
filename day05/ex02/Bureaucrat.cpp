#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() :
_name("Default"),
_grade(150) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
_name(name)
{
    this->setGrade(grade);
}

void        Bureaucrat::setGrade(int grade)
{
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else
            _grade = grade;
    }
    catch(GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    *this = copy;
}

Bureaucrat      &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    _grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::string const   Bureaucrat::getName() const
{
    return _name;
}

int                 Bureaucrat::getGrade() const
{
    return _grade;
}

void                Bureaucrat::increaseGrade()
{
    this->setGrade(_grade - 1);
}

void                Bureaucrat::decreaseGrade()
{
    this->setGrade(_grade + 1);
}

void                Bureaucrat::executeForm(Form const &form)
{
    if (form.getSign() && form.checkExe(_grade))
        std::cout << _name << " executs "
        << form.getName() << std::endl;
}