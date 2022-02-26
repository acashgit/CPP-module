#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int r = rand() % 3;
	if (r == 0)
		return (new A);
	if (r == 1)
		return (new B);
	return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << p << " is A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << p << " is B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << p << " is C" << std::endl;
	else
		std::cout << p << " is not A, B or C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << &p << " is A" << std::endl;
		return ;
	}
	catch(std::exception& e){};
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << &p << " is B" << std::endl;
		return ;
	}
	catch(std::exception& e){};
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << &p << " is C" << std::endl;
		return ;
	}
	catch(std::exception& e){};	
	std::cout << &p << " is not A, B or C" << std::endl;
}

int	main(void)
{

	srand(time(NULL));

	Base *base1 = new Base;
	Base *a1= new A;
	Base *b1= new B;
	Base *c1 = new C;
	Base *rnd = generate();
	
	std::cout << "\n-----pointer check instance-----\n" << std::endl;
	identify(base1);
	identify(a1);
	identify(b1);
	identify(c1);
	identify(rnd);

	Base base2;
	A a2;
	B b2; 
	C c2;

	std::cout << "\n-----reference check instance-----\n" << std::endl;
	identify(base2);
	identify(a2);
	identify(b2);
	identify(c2);
	return (0);
}