#include <iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    //cout<<"Enter 1st Integer : ";
    //cin>>a;
    //cout<<"Enter 2nd Integer : "; 
    //cin>>b;
    //cout<<"Enter operator to use : ";
    cout<<"Enter your problem : ";
    cin>>a>>ch>>b;
    int i = (int)ch;
    switch(i){
        case 43 : // can be written as (best) : case '+' : character 'ch' store hota hai kya?
            cout<<"Answer : "<<a+b;
            break;
        case 42 :
            cout<<"Answer : "<<a*b;
            break;
        case 47 :
            cout<<"Answer : "<<a/b;
            break;
        case 45 :
            cout<<"Answer : "<<a-b;
            break;
        default :
            cout<<"Our calculator only support +,-,/ and *.";

    }

}