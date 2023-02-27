#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main()
{


    {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* k;

    cout << "Test:Dog makeSound()" << endl;
    j->makeSound();
    k = j;
    k->makeSound();


    cout << endl << "Test:make Cat()" << endl;
    Animal *array_animal[10];
    for (int i = 0; i < 5; i++)
    {
        array_animal[i] = new Cat();
    }
    cout << endl << "Test:make Dog()" << endl;
    for (int i = 5; i < 10; i++)
    {
        array_animal[i] = new Dog();
    }

    cout << endl << "Test:delete All" << endl;
    for (int i = 0; i < 10; i++)
    {
        delete array_animal[i];
    }

    cout << endl;
    delete j;
    delete i;
    cout << endl;
    }
    //system("leaks I_dont_want_to_set_the_world_on_fire");
    Dog basic;
    {
        Dog tmp = basic;
    }
    return (0);
}
