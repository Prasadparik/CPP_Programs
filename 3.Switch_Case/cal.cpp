#include <iostream>
using namespace std;
int main (){
    int n,a,b;
    cout<<"Enter Tow Number:";
    cin>>a>>b;
    cout<<"Select Which operation You Want to Perform:\n";
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Multp\n"<<"4. Div\n";
    cin>>n;

    switch(n)
    {
        case 1:cout<<"Answer: "<<a+b;
        break;

        case 2:cout<<"Answer: "<<a-b;
        break;

        case 3:cout<<"Answer: "<<a*b;
        break;

        case 4:cout<<"Answer: "<<a/b;
        break;

        default: cout<<"Invalid Input";
    }

}