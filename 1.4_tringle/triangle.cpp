#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Three Sides:";
    cin>>a>>b>>c;

    if(a==b && b==c){
        cout<<"equilatera";
    }
    else if(a==b || b==c || a==c){
        cout<<"isosceles";
    }
    else{
        cout<<"scalene";
    }
return 0;
}