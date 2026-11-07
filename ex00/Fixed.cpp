#include "Fixed.hpp"

Fixed::Fixed()
{
std::cout << "Default constructor called" << std::endl;
m_num = new int(0);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	m_num = new int(*other.m_num);
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;

	if(this != &other)
	{
		delete m_num;
		m_num = new int(*other.m_num);
	}
return *this;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" <<	std::endl;
	return(*m_num);
}

void  Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" <<	std::endl;
	*m_num = raw;
}
