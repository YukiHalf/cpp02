#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int m_num;
	static const int m_bits = 8;
public:
	Fixed();
	Fixed(const int x);
	Fixed(const float x);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void) const;
	int	toInt(void) const;
	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);
