#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade)
	: name(_name)
{
	if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
	else
		grade = _grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) 
	: name(copy.name), grade(copy.grade)
{
	if (copy.grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (copy.grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &copy )
{
	if (this != &copy)
    {
        if (copy.grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (copy.grade > 150)
            throw Bureaucrat::GradeTooLowException();

        grade = copy.grade;
    }
    return (*this);
}

std::string	Bureaucrat::getName() const
{
	return(name);
}

int	Bureaucrat::getGrade( void ) const
{
	return(grade);
}

void	Bureaucrat::incrementGrade( void )
{
	if (grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	grade ++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("the grade is too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("the grade is too low!");
}

std::ostream	&operator<<( std::ostream &out, const Bureaucrat &b )
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (out);
}

Bureaucrat::~Bureaucrat(){}
