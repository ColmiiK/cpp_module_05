#pragma once

#include <iostream>

class Bureaucrat {
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & obj);
        Bureaucrat& operator=(Bureaucrat const & obj);
        std::string const & getName() const;
        int const & getGrade() const;
        void incrementGrade();
        void decrementGrade();

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {return "Error: Grade is too high.";};
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw() {return "Error: Grade is too low.";};
		};
};

std::ostream& operator<<(std::ostream & os, Bureaucrat const & obj);