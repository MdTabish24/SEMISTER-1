#include <iostream>
using namespace std;

int main() {
    int y;
    int x;
    cout << "Enter the two digits" << endl;
    cin >> x >>y;
    if (x<=0) {
        cout << "You Entered negative Integer " << endl;
    }
    else  if (y<=0) {
        cout << "You Entered negative Integer " << endl;
    }
    else {
        cout <<" The sum is : "<<x+y<<endl;
    }
    return 0;
}
