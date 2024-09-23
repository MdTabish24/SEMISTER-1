#include <iostream>
#include <string>
using namespace std;

int main() {
    string my_str;
    cout << "Enter full name : ";
      getline(cin , my_str) ;
    cout << "You entered: " << my_str << endl;
    return 0;
}