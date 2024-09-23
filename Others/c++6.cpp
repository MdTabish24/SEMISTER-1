#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the marks : " << endl;
    cin >> a;
    if (a>100) {
    cout << "Enter the marks between 0-100" << endl;
    }
    else {
    switch (a/10) {
    case 10:
    case 9:
    case 8:
    cout<<"The Grade is A";
    break;
    case 7:
    case 6:
    case 5:
    cout << "The Grade is B" << endl;
    break;
    case 4:
    case 3:
    cout << "The Grade is C" << endl;
    break;
    default : {
    cout << "Better luck next time" << endl;
    }
    }
    }
    
    return 0;
}