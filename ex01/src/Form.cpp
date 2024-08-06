#include "Form.hpp"

Form::Form(){}
Form::Form(std::string name, int required, int execute) : _name(name), _requiredGrade(required), _executeGrade(execute) {
    try {
        checkGrade(required);
        checkGrade(execute);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}
Form::~Form(){}
Form::Form(Form const & opbj) {
    *this = obj;
}
Form& Form::operator=(Form const & obj) {
    this->_name = obj._name;
    this->_signed = obj._signed;
    this->_requiredGrade = obj._requiredGrade;
    this->_executeGrade = obj._executeGrade;
    return *this;
}

std::string const & Form::getName() const {return _name;}
bool const & Form::getSigned() const {return _signed;}
int const & Form::getRequiredGrade() const {return _requiredGrade;}
int const & Form::getExecuteGrade() const {return _executeGrade;}

void Form::beSigned(Bureaucrat obj) {
    try {
        if (obj.getGrade() <= this.getRequiredGrade()) {
            this._signed = true;
        }
        else {
            throw Form::GradeTooLowException();
        }
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}

void Form::checkGrade(int grade) {
    if (grade > 150)
        throw Form::GradeTooLowException();
    else if (grade < 1)
        throw Form::GradeTooHighException();
}


std::ostream& operator<<(std::ostream & os, Form const & obj) {
    os << "Form " << obj.getName() << ", grade required to be signed is " << obj.getRequiredGrade() << ", required grade to be executed is " << obj.getExecuteGrade() << ". Signed currently? " << obj.getSigned() << std::endl;
}
