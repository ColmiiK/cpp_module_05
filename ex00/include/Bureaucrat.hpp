/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:06:34 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/29 11:58:23 by alvega-g         ###   ########.fr       */
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
		
		// TODO: Overload <<
		
		// Getters
		std::string getName( void );
		int getGrade( void );

		// Setter
		void setGrade( int grade );
		
		// Other functions
		void incrementGrade( void );
		void decrementGrade( void );

		// Execptions
		const std::string GradeTooHighException( void );
		const std::string GradeTooLowException( void );
};

#endif