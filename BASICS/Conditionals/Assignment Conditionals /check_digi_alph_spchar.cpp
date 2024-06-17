#include <iostream>
using namespace std;
int main(){
    //Ques : Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
    char ch;
    cout<<"Enter Your Character : ";
    cin>>ch;
    int i = (int)ch;
    if (i>=65 && i<=90 || i>=97 && i<=122) cout<<"Character is : Alphabet";
    else if (i>=48 && i<=57) cout<<"Character is : Digit";
    else if (i>=33 && i<=47 || i>=58 && i<=64 || i>=91 && i<=96 || i>=123 && i<=126) cout<<"Character is : Special Character";
}