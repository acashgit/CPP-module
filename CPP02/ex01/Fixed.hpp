#include <iostream>
#include <cmath>

class Fixed
{
private:
		int	getvalue;
		static const int	bits;
public:
		Fixed();
		Fixed(int const dig);
		Fixed(float const dig);
		Fixed(const Fixed &dig);
		~Fixed();

		Fixed &operator= (const Fixed &dig);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const  &value);