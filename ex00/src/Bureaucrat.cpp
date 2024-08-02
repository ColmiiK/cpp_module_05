#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    try {

        if (grade < 0)
            throw GradeTooHighException("Grade is too high."); // Throw grade too high exception
        else if (grade > 150)
            throw GradeTooLowException("Grade is too low."); // Throw grade too low execption
        else {
            this->_grade = grade;
        }
    catch (std::exception & e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    }
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(Bureaucrat const & obj){
    *this = obj;
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const & obj){
    this->_name = obj._name;
    this->_grade = obj._grade;
    return *this;
}

std::string const & Bureaucrat::getName() const {return _name;}
int const & Bureaucrat::getGrade() const {return _grade;}

void Bureaucrat::incrementGrade(){
    try {
        if (_grade == 1) {
            throw GradeTooHighException("Unable to increment grade (maximum grade allowed is 1)");
        }    
        else {
            _grade--;
        }
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
void Bureaucrat::decrementGrade(){
    try {
        if (_grade == 150) {
            throw GradeTooLowException("Unable to decrement grade (minimum grade allowed is 150)");
        }    
        else {
            _grade++;
        }
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
