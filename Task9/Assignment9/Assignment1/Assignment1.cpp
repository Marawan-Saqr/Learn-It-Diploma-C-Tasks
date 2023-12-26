#include <iostream>
using namespace std;

int main() {
    
    int studentGrade = 74;

    if (studentGrade >= 85) {
        cout << "Excellent" << endl;
    }
    else if (studentGrade >= 75) {
        cout << "Very Good" << endl;
    }

    else if (studentGrade >= 65) {
        cout << "Good" << endl;
    }

    else if (studentGrade >= 50) {
        cout << "Passed" << endl;
    }
    else {
        cout << "Failed" << endl;
    }

    return 0;
}
