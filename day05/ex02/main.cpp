#include "Bureaucrat.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int     main()
{
    Bureaucrat  jean("jean", 140);
    Bureaucrat  pierre("pierre", 45);
    ShrubberyCreationForm form("target");
    RobotmyRequestForm robot("robot_form");

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

    jean.increaseGrade();
    jean.increaseGrade();
    jean.increaseGrade();
    std::cout << "jean grade: " << jean.getGrade() << std::endl;
    form.execute(jean);
    
    robot.execute(pierre);
    robot.beSigned(pierre);
    robot.execute(pierre);
    return 0;
}