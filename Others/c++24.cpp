#include<iostream>
using namespace std;
void forprime( int a)
{  int  b=2;
    cout << "The result is : " << endl;
    if ( a%b==1 && a/1==a || a/b==2)
    {
    cout << " prime " << endl; 
    }
    
    else {
    cout << "  not prime " << endl;}
}
    int main()
    {
        int x;
        cout << "Enter the number : " << endl;
        cin >> x;
        forprime(x) ;
        return 0;
    }