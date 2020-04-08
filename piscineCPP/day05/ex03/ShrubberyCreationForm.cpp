#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("shrubbery creation", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
Form("shrubbery creation", 145, 137, target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::executeForm() const
{
    std::cout << "Crée un fichier nommé " << this->getTarget()
    << "_shrubbery, et dessines des arbres en ASCII dedans, dans le dossier courant."
    << std::endl; 
}
