#include <iostream>
using namespace std;

int main() {
    int f;
    int x = 1; 
    cin >> f;

    if (f >= 0) {
        int i = 1;
        while (i <= f) {
            x *= i;
            i++;
        }
        cout << x << endl;
    } else {
        cout << "You entered a negative integer" << endl;
    }
    return 0;
}
