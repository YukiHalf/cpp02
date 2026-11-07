#include "Fixed.hpp"


Fixed::Fixed(const int x)
{
	m_num = x * pow(2,m_bits);
}

Fixed::Fixed(const float x)
{
	m_num = static_cast<int>(roundf(x * pow(2,m_bits)));
}

Fixed::Fixed() : m_num(0)
{
}

Fixed::Fixed(const Fixed& other) : m_num(other.m_num)
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	m_num = other.m_num;
	return *this;
}

Fixed& Fixed::operator++()
{
	++m_num;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	++m_num;
	return old;
}

Fixed& Fixed::operator--()
{
	--m_num;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	--m_num;
	return old;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->m_num + other.m_num);
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->m_num - other.m_num);
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->m_num * other.m_num);
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->m_num / other.m_num);
	return result;
}

bool Fixed::operator==(const Fixed& other) const
{
	return this->m_num == other.m_num;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return this->m_num != other.m_num;
}
bool Fixed::operator>(const Fixed& other) const
{
	return this->m_num > other.m_num;
}
bool Fixed::operator<(const Fixed& other) const
{
	return this->m_num < other.m_num;
}
bool Fixed::operator>=(const Fixed& other) const
{
	return this->m_num >= other.m_num;
}
bool Fixed::operator<=(const Fixed& other) const
{
	return this->m_num <= other.m_num;
}

Fixed& Fixed::min(Fixed& a, Fixed&b)
{
	if(a < b)
		return(a);
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed&b)
{
	if(a < b)
		return(a);
	return b;
}

Fixed& Fixed::max(Fixed& a,Fixed &b)
{
	if(a > b)
		return(a);
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if(a > b)
		return (a);
	return b;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
	return(m_num);
}

void  Fixed::setRawBits( int const raw )
{
	m_num = raw;
}

float Fixed::toFloat(void) const
{
	return(m_num / pow(2,m_bits));
}

int Fixed::toInt(void) const
{
	return(m_num / pow(2,m_bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
	out << value.toFloat();
	return out;
}
