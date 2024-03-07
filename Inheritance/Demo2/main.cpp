#include <iostream>

// Classe abstrata
class Animal {
public:
    // Método virtual puro (função puramente virtual)
    virtual void emitSound() const = 0;
};

// Subclasse da classe abstrata
class Dog : public Animal {
public:
    // Implementação do método virtual puro da classe base
    void emitSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Subclasse da classe abstrata
class Cat : public Animal {
public:
    // Implementação do método virtual puro da classe base
    void emitSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {
    // Ponteiros para objetos da classe base (Animal)
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    // Chamando o método emitSound() de cada objeto
    dog->emitSound();
    cat->emitSound();

    // Liberando a memória alocada
    delete dog;
    delete cat;

    return 0;
}
