#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "Form.hpp"

class   RobotmyRequestForm : public Form
{
    private:
    std::string     _target;

    RobotmyRequestForm();

    virtual void    executeForm() const;
    
    public:
    RobotmyRequestForm(std::string const &target);
    ~RobotmyRequestForm();
};

#endif