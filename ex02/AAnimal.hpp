#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    virtual ~AAnimal();
    virtual void makeSound() const = 0; // Pure virtual function
    std::string getType() const;
};

#endif // AANIMAL_HPP
