#pragma once

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & obj);
        PresidentialPardonForm& operator=(PresidentialPardonForm const & obj);
};
