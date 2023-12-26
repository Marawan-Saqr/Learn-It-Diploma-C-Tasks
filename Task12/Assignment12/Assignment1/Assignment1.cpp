#include <iostream>
using namespace std;

int main() {
    
    int result = 1;
    int number;
    cout << "Please Enter Positive Number" << endl;
    cin >> number;

    if (number > 0) {
        for (int i = number; i > 0; i--) {
            result *= i;
        }
        cout << "Your Result Is " << result << endl;
    }
    else {
        cout << "Error You Entered A Wrong Number" << endl;
    }

    return 0;
}