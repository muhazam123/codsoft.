#include <iostream>
using namespace std;

int main() {
    char choice;
    float num_1, num_2, result;

    cout << "Enter the first number: ";
    cin >> num_1;
    cout << "Enter the second number: ";
    cin >> num_2;

    cout << "\nChoose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case '1':
            result = num_1 + num_2;
            cout << "Result: " << result << endl;
            break;
        case '2':
            result = num_1 - num_2;
            cout << "Result: " << result << endl;
            break;
        case '3':
            result = num_1 * num_2;
            cout << "Result: " << result << endl;
            break;
        case '4':
            if (num_2 != 0) {
                result = num_1 / num_2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error! because anything divided by zero is infinity." << endl;
            }
            break;
        default:
            cout << "Error: Invalid choice!" << endl;
    }

    return 0;
}
