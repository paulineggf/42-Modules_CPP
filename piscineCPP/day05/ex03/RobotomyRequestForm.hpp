#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class   RobotomyRequestForm : public Form
{
    private:

    virtual void    executeForm() const;
    
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const &target);
    ~RobotomyRequestForm();
};

#endif