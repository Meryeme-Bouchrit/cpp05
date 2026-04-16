#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "=== TEST 1: Create valid form ===" << std::endl;
    try
    {
        Form f1("Tax Form", 50, 75);
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 2: Create form with grade too high (0) ===" << std::endl;
    try
    {
        Form f2("Invalid Form", 0, 75);
    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 3: Create form with grade too low (151) ===" << std::endl;
    try
    {
        Form f3("Another Invalid", 50, 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 4: Bureaucrat signs successfully ===" << std::endl;
    try
    {
        Bureaucrat chief("Chief", 10);
        Form permit("Permit", 20, 40);
        chief.signForm(permit);
        std::cout << permit << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== TEST 5: Bureaucrat fails to sign ===" << std::endl;
    try
    {
        Bureaucrat intern("Intern", 120);
        Form topSecret("TopSecret", 50, 25);
        intern.signForm(topSecret);
        std::cout << topSecret << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
};
