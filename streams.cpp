#include <iostream>
#include <fstream>

int main() {
    
    std::ofstream arquivo_saida("example.txt");

    if (!file_out.is_open()) {
        std::cerr << "Err to open!" << std::endl;
        return 1;
    }

    file_out << "used by streams stdio." << std::endl;
    file_out << "you can add something here." << std::endl;

    file_out.close();
  
    std::ifstream file_in("example.txt");

    if (!file_in.is_open()) {
        std::cerr << "Err to open file!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file_in, line)) {
        std::cout << line << std::endl;
    }

    file_in.close();

    return 0;
}
