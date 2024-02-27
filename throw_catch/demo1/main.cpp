#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string& productName, double productPrice) : name(productName), price(productPrice) {
        if (name.empty()) {
            throw std::invalid_argument("Erro: Nome do produto não pode estar vazio!");
        }
    }

    void display() {
        std::cout << "Nome: " << name << ", Preço: " << price << std::endl;
    }
};

int main() {
    try {
        // Criando um produto com nome vazio
        Product product1("", 10.99);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    try {
        // Criando um produto válido
        Product product2("Produto 2", 20.49);
        product2.display();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
