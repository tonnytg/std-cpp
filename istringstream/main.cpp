#include <iostream>
#include <sstream>

bool isFloat(const std::string& s) {
    std::istringstream iss(s);
    float temp;
    iss >> temp;
    return iss.eof() && !iss.fail();
}

int main() {
    std::string input = "3.14"; // Altere para a string que você deseja verificar
    if (isFloat(input)) {
        std::cout << "A string pode ser interpretada como um número de ponto flutuante." << std::endl;
    } else {
        std::cout << "A string não pode ser interpretada como um número de ponto flutuante." << std::endl;
    }
    return 0;
}