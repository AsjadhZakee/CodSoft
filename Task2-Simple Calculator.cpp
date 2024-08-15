#include <iostream>

using namespace std;

int main() {
    double no1,no2;
    char symbol;
    double output;
    
    cout<<"\t ****SIMPLE CALCULATOR**** \t"<<endl;

    cout << "Please enter the first number: ";
    cin >> no1;

    cout << "Please enter the symbol (+, -, *, /): ";
    cin >> symbol;

    cout << "Please enter the second number: ";
    cin >> no2;

    

    switch (symbol) {
        case '+':
            output = no1 + no2;
            cout << "Answer: " << output << endl;
            break;
        case '-':
            output = no1 - no2;
            cout << "Result: " << output << endl;
            break;
        case '*':
            output = no1 * no2;
            cout << "Result: " << output << endl;
            break;
        case '/':
            if (no2 != 0) {
                output = no1 / no2;
                cout << "Result: " << output << endl;
            } else {
                cout << "Error ! Couldn't divide by zero." << endl;
            }
            break;
        default:
            cout << " Operation not found !" << endl;
    }

    return 0;
}
