#include <iostream>
using namespace std;

int main() {
    
    int number;
    int power;
    int result = 1;

    cout << "Enter Number" << endl;
    cin >> number;

    cout << "Enter Power" << endl;
    cin >> power;

    for (int i = 1; i <= power; i++) {
       result *= number;
    }

    cout << "Your Result Is " << result << endl;

    return 0;
}