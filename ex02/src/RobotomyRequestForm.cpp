#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj){
    *this = obj;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & obj){
    if (this == &obj)
        ;
    return *this;
}

void RobotomyRequestForm::runForm() const {
    srand(time(0));
    std::cout << "*Drilling noises*" << std::endl;
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized." << std::endl;
    else
        std::cout << "Apologies " << _target << ", the robotomy has failed." << std::endl;
}
