#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<" Enter your Grade "<<endl;
    cin>>a;
    if (a>90) {
    cout<<"You Got Grade A ";
    }
    else if (a<90 && a>70){
    cout<<" You Got Grade B ";
    }
    else if (a<70 && a>35){
    cout<<" You Got Grade C ";
    }
    else if (a<35) {
    cout<<" You Failed ";
    }
    else {
     cout<<"Error"<<endl;
     }
    return 0;
}