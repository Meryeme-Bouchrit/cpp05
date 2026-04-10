#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
    if (grade < 1 || grade > 150)
    
}