#include<iostream>
using namespace std;

int main()
{
    int I=1;
    do 
    {
   int  j=1;
    do 
    {
    cout <<I*j<< ""<<endl;
    j++;
    }
    while (j<=10) ;
    cout<<endl;
    I++;
    }
    while (I<=5) ;
    return 0;
}