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

	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	static Fixed& min(Fixed &a,Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);

	static Fixed& max(Fixed &a,Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);


	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void) const;
	int	toInt(void) const;
	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);
