#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include "MyException.hpp"
# include "Bureaucrat.hpp"

class   Form : public MyException
{
    private:
    std::string const   _name;
    bool                _sign;
    int                 _minGradeSign;
    int                 _minGradeExe;

    Form();

    public:
    Form(std::string const &name, int minGradeSign, int minGradeExe);
    Form(Form &);
    Form          &operator=(Form &);
    ~Form();

    static int         checkGrade(int grade);

    std::string         getName();    
    void                setMinGradeSign(int minGradeSign);
    int                 getMinGradeSign();
    void                setMinGradeExe(int minGradeExe);
    int                 getMinGradeExe();
    bool                getSign();
    void                introduce(std::ostream &flux) const;

    void                beSigned(Bureaucrat &bureaucrat);

};

std::ostream            &operator<<(std::ostream &flux, Form const &rhs);

#endif