#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
	private:
		const 	std::string name;
		int 	grade;
	public:
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat( const Bureaucrat &copy );
		Bureaucrat &operator=( const Bureaucrat &copy );
		std::string getName() const;
		int 		getGrade( void ) const;
		void 		incrementGrade( void );
		void 		decrementGrade( void );
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		~Bureaucrat();
};
	std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b);

// Bureacrat slave(65, "kaka");

// std::cout << slave << std::endl;
// std::cout << "the slave's name is: kaka, his grade is grade" << std::endl;

#endif