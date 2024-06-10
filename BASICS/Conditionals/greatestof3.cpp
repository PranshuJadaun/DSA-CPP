#include <iostream>
using namespace std;
int main(){
    cout<<"Enter 1st integers : ";
    int a,b,c;
    cin>>a;
    cout<<"Enter 2nd integers : ";
    cin>>b;
    cout<<"Enter 3rd integers : ";
    cin>>c;
    if (a>b){
        if(b>c){
            cout<<a<<" is greatest.";
        }
    }
    else if (b>c){
        cout<<c<<" is greatest.";
    }
    else {
        cout<<c<<" is greatest";
    }

}