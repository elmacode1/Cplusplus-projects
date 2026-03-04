#include "Fixed.hpp"

Fixed::Fixed(){
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = copy.getRawBits();
}
Fixed &Fixed::operator=(const Fixed& copy){
    if(&copy != this){
        std::cout << "Copy assignment operator called" << std::endl;
        this->fixed_point = copy.getRawBits();
    }
    return *this;
}
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}
void Fixed::setRawBits( int const raw ){
    fixed_point = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

