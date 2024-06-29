#include <iostream>
using namespace std;


void generateANDTable() {
    cout << "A B | A AND B" << endl;
    cout << "-------------" << endl;
    cout << "0 0 | " << (0 && 0) << endl;
    cout << "0 1 | " << (0 && 1) << endl;
    cout << "1 0 | " << (1 && 0) << endl;
    cout << "1 1 | " << (1 && 1) << endl;
}

void generateORTable() {
    cout << "A B | A OR B" << endl;
    cout << "------------" << endl;
    cout << "0 0 | " << (0 || 0) << endl;
    cout << "0 1 | " << (0 || 1) << endl;
    cout << "1 0 | " << (1 || 0) << endl;
    cout << "1 1 | " << (1 || 1) << endl;
}


void generateNOTTable() {
    cout << "A | NOT A" << endl;
    cout << "---------" << endl;
    cout << "0 | " << (!0) << endl;
    cout << "1 | " << (!1) << endl;
}


void generateXORTable() {
    cout << "A B | A XOR B" << endl;
    cout << "-------------" << endl;
    cout << "0 0 | " << (0 ^ 0) << endl;
    cout << "0 1 | " << (0 ^ 1) << endl;
    cout << "1 0 | " << (1 ^ 0) << endl;
    cout << "1 1 | " << (1 ^ 1) << endl;
}


void generateNANDTable() {
    cout << "A B | A NAND B" << endl;
    cout << "--------------" << endl;
    cout << "0 0 | " << !(0 && 0) << endl;
    cout << "0 1 | " << !(0 && 1) << endl;
    cout << "1 0 | " << !(1 && 0) << endl;
    cout << "1 1 | " << !(1 && 1) << endl;
}


void generateNORTable() {
    cout << "A B | A NOR B" << endl;
    cout << "-------------" << endl;
    cout << "0 0 | " << !(0 || 0) << endl;
    cout << "0 1 | " << !(0 || 1) << endl;
    cout << "1 0 | " << !(1 || 0) << endl;
    cout << "1 1 | " << !(1 || 1) << endl;
}


void generateXNORTable() {
    cout << "A B | A XNOR B" << endl;
    cout << "--------------" << endl;
    cout << "0 0 | " << !(0 ^ 0) << endl;
    cout << "0 1 | " << !(0 ^ 1) << endl;
    cout << "1 0 | " << !(1 ^ 0) << endl;
    cout << "1 1 | " << !(1 ^ 1) << endl;
}

int main() {
    int choice;

    cout << "Select a logic gate to generate its truth table:" << endl;
    cout << "1. AND" << endl;
    cout << "2. OR" << endl;
    cout << "3. NOT" << endl;
    cout << "4. XOR" << endl;
    cout << "5. NAND" << endl;
    cout << "6. NOR" << endl;
    cout << "7. XNOR" << endl;
    cout << "Enter your choice (1-7): ";
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
        case 5:
            generateNANDTable();
            break;
        case 6:
            generateNORTable();
            break;
        case 7:
            generateXNORTable();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
