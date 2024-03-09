#include <iostream>

// Interface base
class Forma {
public:
    // Método virtual puro para calcular a área
    virtual float calcularArea() const = 0;
    // Método virtual puro para imprimir informações
    virtual void imprimir() const = 0;
};

// Implementação da classe derivada - Retângulo
class Retangulo : public Forma {
private:
    float comprimento;
    float largura;

public:
    Retangulo(float c, float l) : comprimento(c), largura(l) {}

    float calcularArea() const override {
        return comprimento * largura;
    }

    void imprimir() const override {
        std::cout << "Retangulo - Comprimento: " << comprimento << ", Largura: " << largura << ", Área: " << calcularArea() << std::endl;
    }
};

// Implementação da classe derivada - Círculo
class Circulo : public Forma {
private:
    float raio;

public:
    Circulo(float r) : raio(r) {}

    float calcularArea() const override {
        return 3.14f * raio * raio;
    }

    void imprimir() const override {
        std::cout << "Circulo - Raio: " << raio << ", Área: " << calcularArea() << std::endl;
    }
};

int main() {
    // Criando objetos das classes derivadas
    Retangulo retangulo(5.0f, 3.0f);
    Circulo circulo(2.5f);

    // Usando a interface para acessar os métodos
    Forma *forma1 = &retangulo;
    Forma *forma2 = &circulo;

    // Chamando métodos através da interface
    forma1->imprimir();
    forma2->imprimir();

    return 0;
}
