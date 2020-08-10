#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("presidential pardon", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
Form("presidential pardon", 25, 5, target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void    PresidentialPardonForm::executeForm() const
{
    std::cout << "Nous annonce que " << this->getTarget()
    << " a été pardonnée par Zafod Beeblebrox." << std::endl; 
}
