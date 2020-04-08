#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("PresidentialPardonForm", 25, 5),
_target("Undefined") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
Form("PresidentialPardonForm", 25, 5),
_target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void    PresidentialPardonForm::executeForm() const
{
    std::cout << "Nous annonce que " << _target
    << " a été pardonnée par Zafod Beeblebrox." << std::endl; 
}
