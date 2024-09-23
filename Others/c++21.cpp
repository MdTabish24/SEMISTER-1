#include <iostream>
using namespace std;

int main() {
    int x, crt= 0;

    cout << "Enter a sequence of integers (enter FINISH to finish):" << endl;

    while (true) {
        cin >> x;
        if (x==0) {
            break;
        }
        crt++;
    }

    cout << "Total number ar " << crt << " integers." << endl;

    return 0;
}
