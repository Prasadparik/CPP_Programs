#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin>>n;
    bool flag = true;

    for (i=2;i<n;i++){
        if(n%i==0){
            flag = false;
            cout<<"Not Prime";
            break;
        }
       
    }
     if(flag){
            cout<<"Prime";
        }
    return 0;
}
