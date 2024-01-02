#include <iostream>
using namespace std;

int main() {
    
    char alphabetic[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int alphabeticLength = sizeof(alphabetic) / sizeof(alphabetic[0]);


    for (int i = 0; i < alphabeticLength; i++) {
        cout << alphabetic[i] << endl;
    }


    return 0;
}