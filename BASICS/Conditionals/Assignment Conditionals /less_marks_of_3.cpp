#include <iostream>
using namespace std;
int main(){
    //Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.
    int a,b,c;
    cout<<"Enter A Marks : ";
    cin>>a;
    cout<<"Enter B Marks : ";
    cin>>b;
    cout<<"Enter C Marks : ";
    cin>>c;
    if(a>b || b<c){
        if(b>c) cout<<"Highest Marks : A";
        else if (c>a) cout<<"Highest Marks : C";
    }
    else cout<<"Highest Marks : B";
}
