#include "Form.hpp"

Form::Form() :
_name("Default"),
_sign(false),
_minGradeSign(150),
_minGradeExe(150),
_target("Undefined") {}

Form::Form(std::string const &name, int minGradeSign, int minGradeExe) :
_name(name),
_sign(false),
_target("Undefined")
{
    this->setMinGradeSign(minGradeSign);
    this->setMinGradeExe(minGradeExe);
}

Form::Form(std::string const &name, int minGradeSign, int minGradeExe, std::string target) :
_name(name),
_sign(false),
_target(target)
{
    this->setMinGradeSign(minGradeSign);
    this->setMinGradeExe(minGradeExe);
}

Form::~Form() {}

std::ostream	&operator<<(std::ostream &flux, Form const &rhs)
{
    rhs.introduce(flux);
	return (flux);
}

void		    Form::introduce(std::ostream &flux) const
{
	flux << "Name : " << _name << std::endl;
	flux << "Sign : " << _sign << std::endl;
	flux << "Minimum Grade to Sign : " << _minGradeSign << std::endl;
	flux << "Minimum Grade to Execute : " << _minGradeExe << std::endl;
}

std::string     Form::getName() const
{
    return _name;
}

void            Form::setMinGradeSign(int minGradeSign)
{
    if (Form::checkGrade(minGradeSign))
        _minGradeSign = minGradeSign;
}

int             Form::getMinGradeSign() const
{
    return _minGradeSign;
}

int             Form::checkExe(int grade) const
{
    try
    {
        if (this->getMinGradeExe() < grade)
            throw Form::GradeTooLowException();
        else
            return 1;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0; 
}

int             Form::checkGrade(int grade)
{
    try
    {
        if (grade < 1)
            throw Form::GradeTooHighException();
        else if (grade > 150)
            throw Form::GradeTooLowException();
        else
            return 1;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

void            Form::setMinGradeExe(int minGradeExe)
{
    if (Form::checkGrade(minGradeExe))
        _minGradeExe = minGradeExe;
}

int             Form::getMinGradeExe() const
{
    return _minGradeExe;
}

bool            Form::getSign() const
{
    return _sign;
}

void            Form::beSigned(Bureaucrat &bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() > _minGradeSign)
            throw Form::GradeTooLowException();
        else
        {
            std::cout << bureaucrat.getName()
            << " signs " << _name << std::endl;
            _sign = true;        
        }
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr
        << bureaucrat.getName()
        << " cant sign " << _name << " because "
        << e.what() << std::endl;
    }
}

void    Form::execute(Bureaucrat const &executor) const
{
    if (this->getSign() == false)
        std::cerr << "Form is not sign" << std::endl;
    else if (this->checkExe(executor.getGrade()))
        this->executeForm();
}

void    Form::setTarget(std::string target)
{
    _target = target;
}

std::string     Form::getTarget() const
{
    return _target;
}