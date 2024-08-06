#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        std::string const _name;
        bool _signed;
        int const _requiredGrade;
        int const _executeGrade;
    public:
        AForm();
        AForm(std::string name, int required, int execute);
        virtual ~AForm();
        AForm(AForm const & obj);
        AForm& operator=(AForm const & obj);
        
        std::string const & getName() const;
        bool const & getSigned() const;
        int const & getRequiredGrade() const;
        int const & getExecuteGrade() const;
        
        virtual void beSigned(Bureaucrat & obj) = 0;
        void checkGrade(int grade);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw() {return "Error: grade is too high.";}
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {return "Error: grade is too low.";}
        };
};

std::ostream& operator<<(std::ostream & os, AForm const & obj);
