#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class   PresidentialPardonForm : public Form
{
    private:
    std::string     _target;

    PresidentialPardonForm();
    
    virtual void    executeForm() const;
    
    public:
    PresidentialPardonForm(std::string const &target);
    ~PresidentialPardonForm();

};

#endif