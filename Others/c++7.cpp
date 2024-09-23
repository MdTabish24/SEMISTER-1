#include<iostream>
using namespace std;

int main()
{
    float a, b;
    char c ;
    cout<<"Enter the two number ";
    cin>>a;
    cin >> b;
    cout << "Enter Oppretor(+,-,*,/)" << endl;
    cin>>c;
    switch (c) {
    case '+' :
        cout << "The sum is " << a+b<<endl;
        break;
    case '-' :
        cout << "The diff is " << a-b<<endl;
        break;
    case '*' :
        cout << "The product is " << a*b<<endl;
        break;
    case '/' :
        cout << "The division is " << a/b<<endl;
        break;
    default :
        cout << "Error" << endl;
    }

    return 0;
}