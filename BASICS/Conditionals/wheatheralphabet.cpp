#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    int x = (int)ch;
    if ((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<ch<<" is a Alphabet.";
    }
    else {
        cout<<ch<<" is not a Alphabet.";
    }
}