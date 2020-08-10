#include "Bureaucrat.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int     main()
{
    Bureaucrat  jean("jean", 140);
    ShrubberyCreationForm form("target");

    std::cout << "jean grade: "
    << jean.getGrade() << std::endl;
    
    std::cout << "min grade sign form: "
    << form.getMinGradeSign() << std::endl;
    
    std::cout << "min grade sign exe: "
    << form.getMinGradeExe() << std::endl;

    std::cout << "getSign: " << form.getSign() << std::endl;

    form.beSigned(jean);

    std::cout << "getSign: " << form.getSign() << std::endl;

    form.execute(jean);

    return 0;
}