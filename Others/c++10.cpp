#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a;
    cout << "Enter the Number : " << endl;
    cin >> a;
    for (int i=1;i<11;i++) {
        cout<<a<<" x "<<i<<" = " <<a*i<<endl;
    }
    
    exit(0);
}