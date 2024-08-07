#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _name("null"), _requiredGrade(25), _executeGrade(5){}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : _name(target), _requiredGrade(25), _executeGrade(5){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj){
    *this = obj;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & obj){
    this->_signed = obj._signed;
    return *this;
}
