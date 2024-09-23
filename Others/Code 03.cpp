#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter digit : ";
    cin >> a;
    if (a<0 || a>0)
    {    if (a>0){
        cout << "The number is positive" << endl;
        }
        if (a<0) {
            cout<<"The number is negative ";
        }
        }
        else { 
        cout<<" The number is 0";
        }

    

    return 0;
}
