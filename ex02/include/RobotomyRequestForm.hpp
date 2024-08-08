#pragma once

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
    private:
        std::string const _target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const & obj);
        RobotomyRequestForm& operator=(RobotomyRequestForm const & obj);
        void runForm() const;
};
