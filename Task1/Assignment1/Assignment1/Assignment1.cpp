#include <iostream>
using namespace std;

int main() {
    
    int number_one;
    int number_two;
    cout << "Please Enter Number One" << endl;
    cin >> number_one;
    cout << "Please Enter Number Two" << endl;
    cin >> number_two;

    int result = ((number_one + number_two) * 3) - 10;
    cout << "Your Result Is " << result << endl;


    return 0;
}



