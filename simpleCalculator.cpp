#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter the operator: "; cin >> op;
    cout << "Enter the number:" << endl;   
    cout << "a = "; cin >> num1;
    cout << "b = "; cin >> num2;
    cout << "Result [a " << op << " b] = ";

    switch (op) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': cout << num1 / num2; break;
        default: cout << "Error! operator is not correct";
    }
 
    return 0;
}
