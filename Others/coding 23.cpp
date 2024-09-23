#include<iostream>
using namespace std;
void sum (int a, int b) {
    int Z;
    Z = a + b;
    cout<<Z;
}
int main()
{
    int x, y, z, a;
    cout << "Enter the number " << endl;
    cin>>x>>y;
    cin >> z>>a;
    cout << "The answer of first two number is : " << endl;
    sum(x, y) ;
    cout <<endl;
    cout << "The answer of second two number is : " << endl;
    sum(z, a) ;
    return 0;
}