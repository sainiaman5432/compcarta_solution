#include <iostream>
using namespace std;

// Function to display the truth table for AND gate
void generateANDTable() {
    cout << "A B | A AND B" << endl;
    cout << "-------------" << endl;
    cout << "0 0 | " << (0 && 0) << endl;
    cout << "0 1 | " << (0 && 1) << endl;
    cout << "1 0 | " << (1 && 0) << endl;
    cout << "1 1 | " << (1 && 1) << endl;
}

// Function to display the truth table for OR gate
void generateORTable() {
    cout << "A B | A OR B" << endl;
    cout << "------------" << endl;
    cout << "0 0 | " << (0 || 0) << endl;
    cout << "0 1 | " << (0 || 1) << endl;
    cout << "1 0 | " << (1 || 0) << endl;
    cout << "1 1 | " << (1 || 1) << endl;
}

// Function to display the truth table for NOT gate
void generateNOTTable() {
    cout << "A | NOT A" << endl;
    cout << "---------" << endl;
    cout << "0 | " << (!0) << endl;
    cout << "1 | " << (!1) << endl;
}

// Function to display the truth table for XOR gate
void generateXORTable() {
    cout << "A B | A XOR B" << endl;
    cout << "-------------" << endl;
    cout << "0 0 | " << (0 ^ 0) << endl;
    cout << "0 1 | " << (0 ^ 1) << endl;
    cout << "1 0 | " << (1 ^ 0) << endl;
    cout << "1 1 | " << (1 ^ 1) << endl;
}

int main() {
    int choice;

    cout << "Select a logic gate to generate its truth table:" << endl;
    cout << "1. AND" << endl;
    cout << "2. OR" << endl;
    cout << "3. NOT" << endl;
    cout << "4. XOR" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            generateANDTable();
            break;
        case 2:
            generateORTable();
            break;
        case 3:
            generateNOTTable();
            break;
        case 4:
            generateXORTable();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}