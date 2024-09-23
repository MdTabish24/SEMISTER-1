#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cout << "Select The Handsing " << endl;
    cin >> a >> b;

    switch (a) {
    case 's':
        if (b == 'r') {
            cout << "Player B is the Winner" << endl;
        } else {
            cout << "Player A is the Winner" << endl;
        }
        break;
    case 'p':
        if (b == 's') {
            cout << "Player B is the Winner" << endl;
        } else {
            cout << "Player A is the Winner" << endl;
        }
        break;
    case 'r':
        if (b == 'p') {
            cout << "Player B is the Winner" << endl;
        } else {
            cout << "Player A is the Winner" << endl;
        }
        break;
    default:
        cout << "Invalid input. Please select either 'r' for rock, 'p' for paper, or 's' for scissors." << endl;
    }

    return 0;
}
