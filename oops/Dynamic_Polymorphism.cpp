#include <iostream>

// without virtual early binding, static binding
// with virtual late binding, dynamic binding

class Animal
{
public:
    // virtual
    virtual void makeSound()
    {
        std::cout << "Animal makes a sound" << std::endl;
    }

    // virtual
    virtual ~Animal(){
        std::cout<<"animal detor"<<std::endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Dog barks" << std::endl;
    }
    ~Dog(){
        std::cout<<"dog detor"<<std::endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Cat meows" << std::endl;
    }
    ~Cat(){
        std::cout<<"cat detor"<<std::endl;
    }
};

void makeSound(Animal *animal){
    animal ->makeSound();           // polymorphic 
                                    // animal sound behaving as per required object allocated at runtime
}

int main()
{

    Animal *animal=new Dog();
    makeSound(animal);      // without vertual o/p= Animal makes a sound , with virtual = Dog barks

    // animal=new Cat();
    // makeSound(animal);
        
    // animal=new Dog();
    // makeSound(animal);

    delete animal;

    // Animal *animalPtr;
    // Dog dogObj;
    // Cat catObj;

    // animalPtr = &dogObj;
    // animalPtr->makeSound(); // Output: "Dog barks"

    // animalPtr = &catObj;
    // animalPtr->makeSound(); // Output: "Cat meows"

    return 0;
}
