#include <iostream>
#include <stdexcept> // Para utilizar std::invalid_argument

int main() {
    try {
        // Exemplo de input esperando uma string, mas recebe um char
        std::string strInput;
        char charInput;
        std::cout << "Digite uma string: ";
        std::cin >> charInput;

        // Lança uma exceção se o input for um char
        if (std::cin.fail()) {
            std::cin.clear(); // Limpa o estado de erro
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora o restante da entrada inválida
            throw std::invalid_argument("Input inválido. Deveria ser uma string.");
        }

        // Exemplo de input esperando um int, mas recebe um float
        int intInput;
        float floatInput;
        std::cout << "Digite um número inteiro: ";
        std::cin >> floatInput;

        // Lança uma exceção se o input for um float
        if (std::cin.fail() || floatInput != static_cast<int>(floatInput)) {
            std::cin.clear(); // Limpa o estado de erro
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora o restante da entrada inválida
            throw std::invalid_argument("Input inválido. Deveria ser um número inteiro.");
        }

        // Se o input for válido, continua com o programa
        std::cout << "Você digitou: " << charInput << " e " << intInput << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
