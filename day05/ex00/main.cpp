#include "Bureaucrat.hpp"

int     main()
{
    Bureaucrat  jean("jean", 1);
    Bureaucrat  jon("jon", 150);
    Bureaucrat  jon2("jon2", 2);

    jon2 = jon;
    std::cout << jon2.getGrade() << std::endl;
    std::cout << jon2.getName() << std::endl;

    std::cout << jean.getGrade() << std::endl;
    jean.increaseGrade();
    std::cout << jean.getGrade() << std::endl;
    jean.decreaseGrade();
    std::cout << jean.getGrade() << std::endl;

    std::cout << jon.getGrade() << std::endl;
    jon.decreaseGrade();
    std::cout << jon.getGrade() << std::endl;
    jon.increaseGrade();
    std::cout << jon.getGrade() << std::endl;
    return 0;
}