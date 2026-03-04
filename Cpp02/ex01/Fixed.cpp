#include "Fixed.hpp"

Fixed::Fixed(){
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}
Fixed &Fixed::operator=(const Fixed& copy){
    std::cout << "Copy assignment operator called" << std::endl;
    if(&copy != this){
        this->fixed_point = copy.fixed_point;
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
Fixed::Fixed(const int n){
    std::cout << "Int consructor called" << std::endl;
    fixed_point = n << scaler; // shifting by 8
}
Fixed::Fixed(const float n){
    std::cout << "Float consructor called" << std::endl;
    fixed_point = roundf(n * (1 << scaler));
    std::cout << "fixed_point: " << fixed_point << std::endl;
}
float Fixed::toFloat( void ) const{
    float   n = (float)fixed_point / (1 << scaler);
    return (n);
}
int Fixed::toInt( void ) const{
    return ((int)fixed_point / (1 << scaler));
}
std::ostream    &operator<<(std::ostream &out, const Fixed &f){
    out << f.toFloat();
    return out;
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

