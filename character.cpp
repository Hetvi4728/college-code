/* Input a single character and check if it is a vowel, consonant, number or special character */

#include <iostream> 
using namespace std;

int main(){
    char ch;
    cout<<"Enter a single character :";
    cin>>ch;

    if((ch>='a'&& ch<='z')||(ch>='A' && ch <='Z')){
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
            cout<<"It is a vowel";
        }
        else{
            cout<<"It is a consonant";
        }
    }
    else if(ch>='0' && ch<='9'){
        cout<<"It is a number";
    }
    else{
        cout<<"It is a special character";
    }
}
