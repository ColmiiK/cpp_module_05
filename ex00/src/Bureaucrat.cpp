/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:06:25 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/29 11:57:38 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

/*

private:
const std::string _name;
int _grade;
public:
// Constructors
Bureaucrat( void );
Bureaucrat( std::string name, int grade );
Bureaucrat( const Bureaucrat& source );
// Destructor
~Bureaucrat( void );
// Overloaded operators
Bureaucrat& operator=( const Bureaucrat& source );

// TODO: Overload <<
*/

Bureaucrat::Bureaucrat( void ) : _name("null"), _grade(150) {
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Constructor with name and grade called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &source ) : _name(source._name), _grade(source._grade) {
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &source ) {
	std::cout << "Copy assigment operator called" << std::endl;
	_grade = source._grade;
	std::cout << "Unable to copy _name (const)" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getName( void ) {
	return (this->_name);
}

int Bureaucrat::getGrade( void ) {
	return (this->_grade);
}

void Bureaucrat::setGrade( int grade ) : _grade( grade ) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade( void ) {
	std::cout << "Incrementing the grade" << std::endl;
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade( void ) {
	std::cout << "Decrementing the grade" << std::endl;
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const std::string Bureaucrat::GradeTooHighException( void ) {
	return("Grade is too high");
}

const std::string Bureaucrat::GradeTooLowException( void ) {
	return("Grade is too low");
}