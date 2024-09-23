#include<iostream>
using namespace std;

int main()
{
    int I = 1;
    int f=1;
    while (I <= 10) 
    {
    f*=I;
   
    I++;
    }
    cout<<f<<endl;
    return 0;
}