#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include "MyException.hpp"
# include "Bureaucrat.hpp"

class   Form : public MyException
{
    protected:
    std::string const       _name;
    bool                    _sign;
    int                     _minGradeSign;
    int                     _minGradeExe;
    std::string             _target;

    Form();

    virtual void        executeForm() const = 0;
    
    protected:
    std::string         getTarget() const;
    void                setTarget(std::string target);
    

    public:
    Form(std::string const &name, int minGradeSign, int minGradeExe);
    Form(std::string const &name, int minGradeSign, int minGradeExe, std::string target);
    ~Form();

    int                 checkExe(int grade) const;
    static int          checkGrade(int grade);

    std::string         getName() const;    
    void                setMinGradeSign(int minGradeSign);
    int                 getMinGradeSign() const;
    void                setMinGradeExe(int minGradeExe);
    int                 getMinGradeExe() const;
    bool                getSign() const;
    void                introduce(std::ostream &flux) const;

    void                beSigned(Bureaucrat &bureaucrat);
    void                execute(Bureaucrat const &executor) const;

};

std::ostream            &operator<<(std::ostream &flux, Form const &rhs);

#endif