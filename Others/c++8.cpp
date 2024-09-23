#include<iostream>
using namespace std;

int main()
{
    char Name;
    cout<<"Enter Your Name";
    cin >> Name;
    switch (Name) {
    case 'b' :
        cout << "You Enter 2nd Alphabet" << endl;
        break;
    case 'c' :
        cout << "You Enter 3rd Alphabet" << endl;
        break;
    case 'd' :
        cout << "You Enter 4th Alphabet" << endl;
        break;
    case 'e' :
        cout << "You Enter 5th Alphabet" << endl;
        break;
        
        default :
        cout << "Enter between b-e" << endl;
}
        return 0;
    }