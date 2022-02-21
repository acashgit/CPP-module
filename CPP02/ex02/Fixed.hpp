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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;

		Fixed &operator= (const Fixed &dig);
		Fixed operator+ (const Fixed &dig);
		Fixed operator- (const Fixed &dig);
		Fixed operator* (const Fixed &dig);
		Fixed operator/ (const Fixed &dig);

		Fixed operator++ (void);
		Fixed operator++ (int);
		Fixed operator-- (void);
		Fixed operator-- (int);

		bool	operator> (const Fixed &dig);
		bool	operator< (const Fixed &dig);
		bool	operator>= (const Fixed &dig);
		bool	operator<= (const Fixed &dig);
		bool	operator== (const Fixed &dig);
		bool	operator!= (const Fixed &dig);

		static Fixed&min (Fixed &a, Fixed &b);
		static const Fixed&min (Fixed const &a, Fixed const &b);
		static Fixed&max (Fixed &a, Fixed &b);
		static const Fixed&max (Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const  &value);