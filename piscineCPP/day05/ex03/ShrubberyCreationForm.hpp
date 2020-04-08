#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class   ShrubberyCreationForm : public Form
{
    private:

    virtual void    executeForm() const;
    
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const &target);
    ~ShrubberyCreationForm();
};

#endif