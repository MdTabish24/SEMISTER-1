#include<iostream>
using namespace std;

int main()
{
    
    char c;
    cout << "Select Area of Rectangle or Parameter of square" << endl; 
         cin >> c;
    switch (c) {
    case 'r':
    int a, b;
   cout << "Enter Length and breadth" << endl;
    cin >> a>>b;
    cout << "The Area of Rectangle is " << a*b << endl;
    break;
   case 's':
    int x;
      cout << "Enter one side value " << endl;
    cin >> x;
    cout << "The Parimeter of square is " << 4*x<< endl;
    break;
     default :
    cout << "You enter wrong information" << endl;
    }
    return 0;
}