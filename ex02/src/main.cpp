#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    ShrubberyCreationForm one("TEST");
    Bureaucrat alpha("Alpha", 1);
    one.execute(alpha);

}
