#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("ShrubberyCreationForm", 145, 137),
_target("Undefined") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
Form("ShrubberyCreationForm", 145, 137),
_target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::executeForm() const
{
    std::cout << "Crée un fichier nommé " << _target
    << "_shrubbery, et dessines des arbres en ASCII dedans, dans le dossier courant."
    << std::endl; 
}
