#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _name("null"), _requiredGrade(72), _executeGrade(137) {}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : _name(target), _requiredGrade(72), _executeGrade(137) {

}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj){
    *this = obj;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & obj){
    this->_signed = obj._signed;
    return *this;
}

