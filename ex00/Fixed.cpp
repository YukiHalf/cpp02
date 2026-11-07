#include "Fixed.hpp"

Fixed::Fixed() : m_num(0)
{
std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : m_num(other.m_num)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
		m_num = other.m_num;
return *this;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" <<	std::endl;
	return(m_num);
}

void  Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" <<	std::endl;
	m_num = raw;
}
