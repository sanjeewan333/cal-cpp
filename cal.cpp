#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "Enter expression (e.g., 5 + 3): ";
        cin >> num1 >> op >> num2;

        switch(op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}

