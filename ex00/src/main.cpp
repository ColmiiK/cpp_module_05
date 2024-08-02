#include "Bureaucrat.hpp"

int main() {
    Bureaucrat alpha("Alpha", 5);
    std::cout << alpha.getName() << ", bureaucrat grade " << alpha.getGrade() << std::endl;
}
