#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string n, int a) : name(n), age(a) {}
    virtual void makeSound() const = 0;
    virtual void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Type: Animal" << std::endl;
    }

protected:
    std::string name;
    int age;
};

class Dog : public Animal {
public:
    Dog(std::string n, int a) : Animal(n, a) {}
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }
    void displayInfo() const override {
        std::cout << "Name: " << name << ", Age: " << age << ", Type: Dog" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(std::string n, int a) : Animal(n, a) {}
    void makeSound() const override {
        std::cout << "Meow!" << std::endl;
    }
    void displayInfo() const override {
        std::cout << "Name: " << name << ", Age: " << age << ", Type: Cat" << std::endl;
    }
};

class Bird : public Animal {
public:
    Bird(std::string n, int a) : Animal(n, a) {}
    void makeSound() const override {
        std::cout << "Chirp! Chirp!" << std::endl;
    }
    void displayInfo() const override {
        std::cout << "Name: " << name << ", Age: " << age << ", Type: Bird" << std::endl;
    }
};

int main() {
    Dog buddY("Buddy", 3);
    Cat whiskers("Whiskers", 5);
    Bird polly("Polly", 2);

    Animal* animals[3] = {&buddY, &whiskers, &polly};

    for (Animal* a : animals) {
        a->makeSound();
        a->displayInfo();
    }

    return 0;
}