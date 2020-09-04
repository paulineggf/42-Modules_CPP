#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("robotomy request", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
Form("robotomy request", 72, 45, target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void    RobotomyRequestForm::executeForm() const
{
    std::cout << "Fait des bruits de perceuses, et annonce que "
    << getTarget() << " a bien été Robotoomizée." << std::endl; 
}
