#include "Fixed.hpp"

Fixed::Fixed(){
    fixed_point = 0;
}
Fixed::Fixed(const Fixed& copy){
    *this = copy;
}
Fixed &Fixed::operator=(const Fixed& copy){
    if(&copy != this){
        this->fixed_point = copy.fixed_point;
    }
    return *this;
}
int Fixed::getRawBits( void ) const{
    return fixed_point;
}
void Fixed::setRawBits( int const raw ){
    fixed_point = raw;
}
Fixed::Fixed(const int n){
    fixed_point = n << scaler; // shifting by 8 (n*256)
}
Fixed::Fixed(const float n){
    fixed_point = roundf(n * (1 << scaler));
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
bool Fixed::operator<(const Fixed& other){
    if(this->fixed_point < other.fixed_point)
        return true;
    else
        return false;
}
bool Fixed::operator<=(const Fixed& other){
    if(this->fixed_point <= other.fixed_point)
        return true;
    else
        return false;
}
bool Fixed::operator>(const Fixed& other){
    if(this->fixed_point > other.fixed_point)
        return true;
    else
        return false;
}
bool Fixed::operator>=(const Fixed& other){
    if(this->fixed_point >= other.fixed_point)
        return true;
    else
        return false;
}
bool Fixed::operator==(const Fixed& other){
    if(this->fixed_point == other.fixed_point)
        return true;
    else
        return false;
}
bool Fixed::operator!=(const Fixed& other){
    if(this->fixed_point != other.fixed_point)
        return true;
    else
        return false;
}
Fixed Fixed::operator+(const Fixed& other){
    Fixed value;
    value = this->toFloat() + other.toFloat();
    return value;
}
Fixed Fixed::operator-(const Fixed& other){
    Fixed value;
    value = this->toFloat() - other.toFloat();
    return value;
}
Fixed Fixed::operator*(const Fixed& other){
    Fixed value;
    value = this->toFloat() * other.toFloat();
    return value;
}
Fixed Fixed::operator/(const Fixed& other){
    Fixed value;
    value = this->toFloat() / other.toFloat();
    return value;
}
Fixed Fixed::operator++(int){ //post increment
    Fixed tmp;
    tmp = *this;
    this->fixed_point += 1;
    return tmp;
}
Fixed Fixed::operator--(int){
    Fixed tmp;
    tmp = *this;
    this->fixed_point -= 1;
    return tmp;
}
Fixed &Fixed::operator++(){ // pre increment
    fixed_point += 1;
    return *this;
}
Fixed &Fixed::operator--(){
    fixed_point -= 1;
    return *this;
}
Fixed &Fixed::min(Fixed& a, Fixed& b){
    if(a.fixed_point < b.fixed_point)
        return a;
    else
        return b;
}
Fixed &Fixed::max(Fixed& a, Fixed& b){
    if(a.fixed_point > b.fixed_point)
        return a;
    else
        return b;
}
const Fixed &Fixed::min(const Fixed& a, const Fixed& b){
    if(a.fixed_point < b.fixed_point)
        return a;
    else
        return b;
}
const Fixed &Fixed::max(const Fixed& a, const Fixed& b){
    if(a.fixed_point > b.fixed_point)
        return a;
    else
        return b;
}
Fixed::~Fixed(){}

