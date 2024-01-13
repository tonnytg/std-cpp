#include <iostream>
#include <fstream> // Include the file stream library

int main() {
    std::ofstream outputFile; // Create an output file stream object

    // Open a file named "example.txt" for writing
    outputFile.open("example.txt");

    // Check if the file is successfully opened
    if (!outputFile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1; // Return an error code
    }

    // Write something to the file
    outputFile << "Hello, World!" << std::endl;

    // Close the file
    outputFile.close();

    std::cout << "Data has been written to the file." << std::endl;

    return 0; // Return 0 to indicate successful execution
}
