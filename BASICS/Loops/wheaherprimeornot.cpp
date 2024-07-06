#include <iostream>
using namespace std;
int main(){
    //Write a program to check wheather a program is prime or not.
    int x;
    cout<<"Enter a Integer : ";
    cin>>x;
    for (int i=0 ; i < x ; i++ ){
        if (x%i==0 && i!=1){
            cout<<"It is not a Prime.";
            break;
        }
        else {cout<<"It is a Prime";
        break;
        }
    }
}