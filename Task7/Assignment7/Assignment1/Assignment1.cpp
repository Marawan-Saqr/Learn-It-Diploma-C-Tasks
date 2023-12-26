#include <iostream>
using namespace std;

int main() {

    int numbers[4] = { 100, 1, 16, 5 };
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
    int theSmallest = numbers[0];

    for (int i = 1; i < numbersSize; i++) {
        if (theSmallest > numbers[i]) {
            theSmallest = numbers[i];
        }
    }

    cout << "The Smallest Number Is " << theSmallest << endl;

    return 0;
}