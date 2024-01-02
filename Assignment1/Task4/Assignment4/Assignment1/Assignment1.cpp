#include <iostream>
using namespace std;

int main() {

    float area;
    float circumference;
    float r;
    float by = float(22) / float(7);

    cout << "Enter Radius Of The Circle" << endl;
    cin >> r;

    area = by * r * r;
    circumference = 2 * by * r;

    cout << "The Result Of Area Is " << area << endl;
    cout << "The Result Of circumference Is " << circumference << endl;

    return 0;
}