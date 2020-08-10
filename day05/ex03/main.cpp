#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int     main()
{
    Bureaucrat  jean("jean", 1);
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

    Intern  intern;

    Form *form2;
    form2 = intern.makeForm("presidential pardon", "target");

    if (form2)
    {
        std::cout << form2->getName() << std::endl;
        form2->beSigned(jean);
        form2->execute(jean);
    }

    return 0;
}