#include <iostream>

namespace math {
    int add(int a, int b) {
        return a + b;
    }
}

int main(int argc, char **argv) {

    std::cout << "Hello World!" << std::endl;
    std::cout << "1 + 2 = " << math::add(1, 2) << std::endl;

    return 0;
}