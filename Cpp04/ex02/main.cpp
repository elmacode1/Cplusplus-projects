
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // AAnimal a;
	// a.getType();
    std::cout << "---- Basic tests from subject ----" << std::endl;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    std::cout << "\n---- Array of Animals test ----" << std::endl;

    const int size = 10;
    const AAnimal* animals[size];

    for (int k = 0; k < size; k++)
    {
        if (k % 2 == 0)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    for (int k = 0; k < size; k++)
        delete animals[k];

    std::cout << "\n---- Deep copy test (Dog) ----" << std::endl;

    Dog originalDog;
    originalDog.setIdea("I want food", 0);
    originalDog.setIdea("I want sleep", 1);

    Dog copyDog = originalDog;
    originalDog.setIdea("I want to run", 0);

    std::cout << "Original: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copy:     " << copyDog.getIdea(0) << std::endl;

    return 0;
}