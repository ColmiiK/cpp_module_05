#pragma once

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
    private:
        std::string const _target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & obj);
        PresidentialPardonForm& operator=(PresidentialPardonForm const & obj);
        void runForm() const;
};
