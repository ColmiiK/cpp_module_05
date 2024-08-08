#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        std::string const _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const & obj);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const & obj);
        void runForm() const;
};
