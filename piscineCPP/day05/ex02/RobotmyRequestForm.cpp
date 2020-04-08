#include "RobotmyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotmyRequestForm::RobotmyRequestForm() :
Form("RobotmyRequestForm", 72, 45),
_target("Undefined") {
}

RobotmyRequestForm::RobotmyRequestForm(std::string const &target) :
Form("RobotmyRequestForm", 72, 45),
_target(target) {
}

RobotmyRequestForm::~RobotmyRequestForm() {}

void    RobotmyRequestForm::executeForm() const
{
    std::cout << "Fait des bruits de perceuses, et annonce que "
    << _target << " a bien été robotomizée." << std::endl; 
}
