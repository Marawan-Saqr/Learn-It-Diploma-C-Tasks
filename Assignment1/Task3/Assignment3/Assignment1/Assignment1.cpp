#include <iostream>
using namespace std;

int main() {

    float F;
    float C;
    cout << "Please Enter celsius temperature degree" << endl;
    cin >> C;

    F = C * (float(9) / float(5)) + float(32);

    cout << "The Result Of Forumla Is " << F << endl;

    return 0;
}