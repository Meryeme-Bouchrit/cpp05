#include "Bureaucrat.hpp"

int main()
{
	std::cout << "=== TEST 1: Create valid bureaucrat ===" << std::endl;
	try
	{
		Bureaucrat b1("Alice", 5);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 2: Create with grade too high (0) ===" << std::endl;
	try
	{
		Bureaucrat b2("Bob", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 3: Create with grade too low (151) ===" << std::endl;
	try
	{
		Bureaucrat b3("Charlie", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 4: Increment valid grade ===" << std::endl;
	try
	{
		Bureaucrat b4("Dave", 10);
		std::cout << "Before: " << b4 << std::endl;
		b4.incrementGrade();
		std::cout << "After increment: " << b4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 5: Decrement valid grade ===" << std::endl;
	try
	{
		Bureaucrat b5("Eve", 145);
		std::cout << "Before: " << b5 << std::endl;
		b5.decrementGrade();
		std::cout << "After decrement: " << b5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 6: Increment at boundary (grade 1) ===" << std::endl;
	try
	{
		Bureaucrat b6("Frank", 1);
		std::cout << "Before: " << b6 << std::endl;
		b6.incrementGrade();
		std::cout << "After increment: " << b6 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 7: Decrement at boundary (grade 150) ===" << std::endl;
	try
	{
		Bureaucrat b7("Grace", 150);
		std::cout << "Before: " << b7 << std::endl;
		b7.decrementGrade();
		std::cout << "After decrement: " << b7 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	return 0;
}
