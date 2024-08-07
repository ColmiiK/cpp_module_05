#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {

}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj){
    *this = obj;
    
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj){
    if (this == &obj)
        ;
    return *this;
}

void ShrubberyCreationForm::executeForm() const {
    std::ofstream file;
    file.open(std::string(this->getName() + std::string("_shrubbery")).c_str());
    file << "               ,@@@@@@@,\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\
   `&%\\ ` /%&'    |.|        \\ '|8'\
       |o|        | |         | |\
       |.|        | |         | |\
jgs \\/ ._\\/\\/_/__/  ,\\_/\\/__\\/.  \\_/\\/__/_";
    file.close();
}
