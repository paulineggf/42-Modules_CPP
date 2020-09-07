#ifndef INTER_HPP
# define INTER_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define  NB_FORM 3

class   Intern
{
    private:
    static std::string  _name[NB_FORM];

    Form               *(*_forms[NB_FORM])(std::string target);
    static Form        *_presidentialPardon(std::string target);
    static Form        *_robotomyRequest(std::string target);
    static Form        *_shrubberyCreation(std::string target);

    public:
    Intern();
    Intern(Intern &);
    Intern          &operator=(Intern &);
    ~Intern();

    Form    *makeForm(std::string name, std::string const &target);
};

#endif