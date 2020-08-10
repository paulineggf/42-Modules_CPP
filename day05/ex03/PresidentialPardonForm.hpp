#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class   PresidentialPardonForm : public Form
{
    private:
    
    virtual void    executeForm() const;
    
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    ~PresidentialPardonForm();

};

#endif