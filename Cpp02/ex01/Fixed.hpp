#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class   Fixed
{
    private:
        int                 fixed_point;
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
        ~Fixed();

};
std::ostream    &operator<<(std::ostream &out, const Fixed &f);

#endif