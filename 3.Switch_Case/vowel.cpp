#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    bool flag = false;

    switch(c)
    {
        case 'a': flag = true;
        break;

        case 'e': flag = true;
        break;

        case 'i': flag = true;
        break;

        case 'o': flag = true;
        break;

        case 'u': flag = true;
        break;

        default: cout<<"It is a consonant"<<endl;
    } 

    if(flag) cout<<"It is a Vowel"<<endl;

    return 0;
}