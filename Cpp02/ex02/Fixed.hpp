#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class   Fixed
{
    private:
        int                 fixed_point; //If you increase fixed_point by 1,you increase the real number by 1 / 256.
        static const int    scaler = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed& copy);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(const Fixed& copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        bool operator<(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator>(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);
        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed &operator++();
        Fixed &operator--();
        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        ~Fixed();

};
std::ostream    &operator<<(std::ostream &out, const Fixed &f);

#endif