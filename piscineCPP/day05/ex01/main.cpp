#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    Bureaucrat  jean("jean", 100);
    Form        form("form1", 5, 2);

    std::cout << jean.getGrade() << std::endl;
    form.beSigned(jean);
    std::cout << "getSign: " << form.getSign() << std::endl;
    form.setMinGradeSign(100);
    form.beSigned(jean);
    std::cout << "getSign: " << form.getSign() << std::endl;
    form.setMinGradeSign(160);
    std::cout << form.getMinGradeSign() << std::endl;
    return 0;
}