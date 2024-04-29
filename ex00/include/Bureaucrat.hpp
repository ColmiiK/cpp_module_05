/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:06:34 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/29 17:01:49 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
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
		// Getters
		std::string getName( void ) const;
		int getGrade( void ) const;
		// Setter
		void setGrade( int grade );
		// Other functions
		void incrementGrade( void );
		void decrementGrade( void );
		// Exceptions
		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what( void ) const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what( void ) const throw();
		};
		
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &source );

#endif