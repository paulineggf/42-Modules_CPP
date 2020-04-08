#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class   ShrubberyCreationForm : public Form
{
    private:
    std::string     _target;

    ShrubberyCreationForm();

    virtual void    executeForm() const;
    
    public:
    ShrubberyCreationForm(std::string const &target);
    ~ShrubberyCreationForm();
};

#endif