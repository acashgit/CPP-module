#include <iostream>

class Fixed
{
private:
		int	getvalue;
		static const int	bits;
public:
		Fixed();
		Fixed(const Fixed &dig);
		~Fixed();

		Fixed &operator= (const Fixed &dig);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};