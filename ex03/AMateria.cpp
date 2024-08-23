#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}
