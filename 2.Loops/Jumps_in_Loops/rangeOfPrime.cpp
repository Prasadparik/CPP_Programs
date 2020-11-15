#include<iostream>
using namespace std;
int main(){
    int a,b,num,i;
    cin>>a>>b;

    for(num=a;num<=b;num++){
        for(i=2;i<num; i++){
            if(num%i==0) break;
        }//inner loop
if (i==num) cout<<num<<endl;
    } //Main Loop


    return 0;
}