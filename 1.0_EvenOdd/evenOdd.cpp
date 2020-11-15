#include<iostream>
#include <string>
using namespace std;
 int main(){
     int n1;
     cin>>n1;
     string r = (n1%2==0) ? " is Even" : " is Odd";
     cout<<n1<<r;
     return 0;
 }
