#include <iostream>
using namespace std;

int main() {
    
    int num1;
    int num2;
    int result = 0;
    char op;
    
    cout << "========Welcome At Our Calculator Programme========" << endl;
    cout << "Please Enter The Numbers" << endl;
    cin >> num1 >> num2;
    cout << "Select The Operation (+ | - | * | / | %)" << endl;
    cin >> op;

    switch (op) {
    case '+':
        result = num1 + num2;
        cout << "You Selected Plus Operator " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "You Selected Minus Operator " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "You Selected Multiple Operator " << result << endl;
        break;
    case '/':
        result = num1 / num2;
        cout << "You Selected Divider Operator " << result << endl;
        break;
    case '%':
        result = num1 % num2;
        cout << "You Selected Modulus Operator " << result << endl;
        break;
    default:
        cout << "Error Operator" << endl;
    }

    return 0;
}