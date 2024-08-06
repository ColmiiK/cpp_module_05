#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const & obj);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm& operator=(RobotomyRequestForm const & obj);
}
