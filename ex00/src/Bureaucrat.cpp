/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:06:25 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/29 17:01:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

/*
TODO: Overload <<
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
	return (*this);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &source ) {
	os << source.getName();
	return (os);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getName( void ) const {
	return (this->_name);
}

int Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void Bureaucrat::setGrade( int grade ) {
	this->_grade = grade;
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

const char *Bureaucrat::GradeTooHighException::what( void ) const throw(){
	return("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw(){
	return("Grade is too low");
}