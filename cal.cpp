#include <iostream>
#include <cmath>    // For pow() function
using namespace std;

// Function declarations
double calculate(double num1, double num2, char op);
bool isValidOperator(char op);

int main() {
    double num1, num2, result;
    char op;
    char choice;

    do {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /, %, ^): ";
        cin >> op;

        if (!isValidOperator(op)) {
            cout << "Invalid operator! Try again.\n";
            continue;  // Restart loop
        }

        cout << "Enter second number: ";
        cin >> num2;

        // Check for division or modulus by zero
        if ((op == '/' || op == '%') && num2 == 0) {
            cout << "Error: Division or modulus by zero is not allowed!\n";
            continue;  // Restart loop
        }

        result = calculate(num1, num2, op);
        cout << "Result: " << result << endl;

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!\n";
    return 0;
}

// Function to check if operator is valid
bool isValidOperator(char op) {
    return (op == '+' || op == '-' || op == '*' || op == '/' || op == '%' || op == '^');
}

// Function to perform calculation
double calculate(double num1, double num2, char op) {
    switch(op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        case '%': return static_cast<int>(num1) % static_cast<int>(num2);  // Modulus for ints
        case '^': return pow(num1, num2);  // Power function
        default: return 0; // Should never reach here due to validation
    }
}
