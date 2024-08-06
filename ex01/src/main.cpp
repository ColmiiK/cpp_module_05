#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
	Bureaucrat alpha("Alpha", 5);
    alpha.decrementGrade();
    Form one("One", 200, 50);
    std::cout << one << std::endl;
    std::cout << alpha << std::endl;

    alpha.signForm(one);

    std::cout << one << std::endl;

}
