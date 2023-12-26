#include <iostream>
using namespace std;

int main() {

    int numberOne;
    int numberTwo;

    cout << "Enter Number One" << endl;
    cin >> numberOne;
    cout << "Enter Number Two" << endl;
    cin >> numberTwo;

    if (numberOne > numberTwo) {
        cout << "Number One " << numberOne << " Is Bigger Than " << "Number Two " << numberTwo << endl;
    }
    else if (numberOne < numberTwo) {
        cout << "Number One " << numberOne << " Is Smaller Than " << "Number Two " << numberTwo << endl;
    }
    else {
        cout << "Number One " << numberOne << " Is Equal " << "Number Two " << numberTwo << endl;
    }


    return 0;
}