#include<iostream>
using namespace std;

int main()
{    int day;
    cout<<"Enter the value for day ";
    cin>>day;
    switch (day) 
    {
    case 1 :
    cout << "The day is Monday" << endl;
    break;
    case 2 :
    cout << "The day is Tuesday" << endl;
    break;
    case 3 :
    cout << "The day is Wednesday" << endl;
    break;
    case 4 :
    cout << "The day is Thursday " << endl;
    break;
    case 5 :
    cout << "The day is Friday" << endl;
    break;
    case 6 :
    cout << "The day is Saturday" << endl;
    break;
    case 7 :
    cout << "The day is Sunday" << endl;
    break;
    default :
    cout<<"You Enter more than 7";
    }
    return 0;
}