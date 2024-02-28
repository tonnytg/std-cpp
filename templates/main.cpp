#include <iostream>

// Template para função que retorna o maior entre dois valores de tipo genérico T
template<typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Exemplos de uso do template
    std::cout << "Maior entre 5 e 10: " << maximo(5, 10) << std::endl;
    std::cout << "Maior entre 3.14 e 2.71: " << maximo(3.14, 2.71) << std::endl;
    std::cout << "Maior entre 'abc' e 'def': " << maximo("abc", "def") << std::endl;
    
    return 0;
}
