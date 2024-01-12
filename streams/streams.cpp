#include <iostream>
#include <fstream>
#include <string> // Include <string> for using std::string

int main() {
    
    std::ofstream file_out("example.txt"); // Corrected variable name

    if (!file_out.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl; // Corrected error message
        return 1;
    }

    file_out << "used by streams stdio." << std::endl;
    file_out << "you can add something here." << std::endl;

    file_out.close();
  
    std::ifstream file_in("example.txt");

    if (!file_in.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl; // Corrected error message
        return 1;
    }

    std::string line;
    while (std::getline(file_in, line)) {
        std::cout << line << std::endl;
    }

    file_in.close();

    return 0;
}
