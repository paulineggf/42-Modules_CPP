#include "Intern.hpp"

std::string     Intern::_name[NB_FORM] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
};

Intern::Intern()
{
    _forms[0] = &Intern::_presidentialPardon;
    _forms[1] = &Intern::_robotomyRequest;
    _forms[2] = &Intern::_shrubberyCreation;
}

Intern::~Intern() {}

Form    *Intern::makeForm(std::string name, std::string const &target)
{
    int     i;

    i = 0;
    while (i < NB_FORM)
    {
        if ((Intern::_name[i].compare(name) == 0))
            return _forms[i](target);
        i++;
    }
    std::cout << "Form not found" << std::endl;
    return nullptr;    
}

Form        *Intern::_presidentialPardon(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form        *Intern::_robotomyRequest(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form        *Intern::_shrubberyCreation(std::string target)
{
    return new ShrubberyCreationForm(target);
}