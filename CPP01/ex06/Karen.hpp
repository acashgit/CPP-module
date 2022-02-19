#include <iostream>
#include <map>

class Karen
{
private:
		std::map<std::string, int> map;
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		enum lvl {
				DEBUG = 1,
				INFO = 2,
				WARNING = 3,
				ERROR = 4,
		};
public:
		Karen();
		~Karen();
		void	complain( std::string level );
};