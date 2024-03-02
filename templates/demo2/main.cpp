#include <iostream>

// Função de template para retornar o máximo entre dois valores
template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Chamando a função maximo com inteiros
    int maxInt = maximo(5, 10);
    std::cout << "O máximo entre 5 e 10 é: " << maxInt << std::endl;

    // Chamando a função maximo com floats
    float maxFloat = maximo(3.14f, 2.71f);
    std::cout << "O máximo entre 3.14 e 2.71 é: " << maxFloat << std::endl;

    // Chamando a função maximo com caracteres
    char maxChar = maximo('a', 'z');
    std::cout << "O máximo entre 'a' e 'z' é: " << maxChar << std::endl;

    return 0;
}
