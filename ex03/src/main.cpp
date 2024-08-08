#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main() {
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        Bureaucrat alpha("Alpha", 1);
        alpha.signAForm(*rrf);
        alpha.executeForm(*rrf);
        delete rrf;
    }
    {
        Intern two;
        AForm* invalid;
        invalid = two.makeForm("InvalidForm", "InvalidName");
        delete invalid;
    }
}
