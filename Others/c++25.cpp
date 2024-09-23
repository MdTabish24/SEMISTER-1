#include<iostream>
#include<string>
using namespace std;
void name( string fname) {
cout<<fname << "smith\n";
}
void age( int a) 
{ cout <<a<<" Years old \n";
}
void course ( string c) 
{
cout<<c << " In birla college";
}
int main()
{
    name("Johan ") ;
    age ( 5 ) ;
    course( " BSC IT ") ;
    return 0;
}