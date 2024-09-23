#include <iostream>
using namespace std;

int main()
{
    int c='a';
    for (char i = 1; i <= 5; i++)
    {
        for (char j =1; j <= i; j++)
        {
        cout << c << " ";
        c++;
        }
        
        cout<<endl;
    }
    return 0;
}