#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;

    int lowV, UpV;

    lowV = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    UpV = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if(lowV || UpV) cout<<"is Vowel";
    else cout<<" is Consonant";

    return 0;
}