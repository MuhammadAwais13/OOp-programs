// reg no 2023388 
// name muhammad Awais Ashraf
// section AI(F)




#include <iostream>

using namespace std;

// Base class 
class Animal {
public:
    // Constructor to initialize name and age
    Animal(const char* n, int a) : name(n), age(a) {}

    //  virtual function makeSound() makes Animal an abstract class
    virtual void makeSound() const = 0;

   
    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Type: Animal" << endl;
    }

protected:
    const char* name;
    int age;
};

// Derived class Dog 
class Dog : public Animal {
public:
    // Constructor to initialize Dog 
    Dog(const char* n, int a) : Animal(n, a) {}

    
    void makeSound() const override {
        cout << "Woof! Woof!" << endl;
    }

    // Override displayInfo() to display Dog information
    void displayInfo() const override {
        cout << "Name: " << name << ", Age: " << age << ", Type: Dog" << endl;
    }
};

// Derived class Cat from Animal
class Cat : public Animal {
public:
    // Constructor to initialize Cat with name and age
    Cat(const char* n, int a) : Animal(n, a) {}

    // Implement makeSound() for Cat
    void makeSound() const override {
        cout << "Meow!" << endl;
    }

    // Override displayInfo() to display Cat information
    void displayInfo() const override {
        cout << "Name: " << name << ", Age: " << age << ", Type: Cat" << endl;
    }
};

// Derived class Bird from Animal
class Bird : public Animal {
public:
    // Constructor to initialize Bird with name and age
    Bird(const char* n, int a) : Animal(n, a) {}

    // Implement makeSound() for Bird
    void makeSound() const override {
        cout << "Chirp! Chirp!" << endl;
    }

    // Override displayInfo() to display Bird information
    void displayInfo() const override {
        cout << "Name: " << name << ", Age: " << age << ", Type: Bird" << endl;
    }
};

int main() {
    // Create instances of Dog, Cat, and Bird
    Dog buddy("Buddy", 3);
    Cat whiskers("Whiskers", 5);
    Bird polly("Polly", 2);

    // Store pointers to animals in an array
    Animal* animals[3] = {&buddy, &whiskers, &polly};

    // Iterate through the array and call makeSound() and displayInfo() for each animal
    for (Animal* a : animals) {
        a->makeSound();
        a->displayInfo();
    }

    return 0;
}
