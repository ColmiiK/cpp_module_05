#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _name("null"), _requiredGrade(145), _executeGrade(137){

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _name("target"), _requiredGrade(145), _executeGrade(137){

}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj){
    *this = obj;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj){
    this->_signed = obj._signed;
    return *this;
}

