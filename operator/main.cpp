#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    // Constructor
    Number(int v) : value(v) {}

    // Assignment operator (Operator =)
    Number& operator=(const Number& other) {
        if (this != &other) {
            this->value = other.value;
        }
        return *this;
    }

    // Greater than operator (Operator >)
    bool operator>(const Number& other) const {
        return this->value > other.value;
    }

    // Less than operator (Operator <)
    bool operator<(const Number& other) const {
        return this->value < other.value;
    }

    // Addition operator (Operator +)
    Number operator+(const Number& other) const {
        return Number(this->value + other.value);
    }

    // Subtraction operator (Operator -)
    Number operator-(const Number& other) const {
        return Number(this->value - other.value);
    }

    // Division operator (Operator /)
    Number operator/(const Number& other) const {
        if (other.value != 0) {
            return Number(this->value / other.value);
        } else {
            cout << "Error: division by zero!" << endl;
            return Number(0);
        }
    }

    // Multiplication operator (Operator *)
    Number operator*(const Number& other) const {
        return Number(this->value * other.value);
    }

    // Function to print the value
    void print() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10);
    Number num2(5);

    Number result;

    result = num1 + num2;
    cout << "Sum: ";
    result.print();

    result = num1 - num2;
    cout << "Subtraction: ";
    result.print();

    result = num1 / num2;
    cout << "Division: ";
    result.print();

    result = num1 * num2;
    cout << "Multiplication: ";
    result.print();

    cout << "num1 is greater than num2? ";
    if (num1 > num2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    cout << "num1 is less than num2? ";
    if (num1 < num2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
