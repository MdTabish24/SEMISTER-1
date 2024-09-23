#include<iostream>
using namespace std;

int main()
{
     int a;
    cout << "Enter the Number" << endl;
    cin >> a;
    for (int I=1;I<=10;I++) {
    cout << a <<"x"<< I<< "=" << a*I <<endl;
    }
    return 0;
}