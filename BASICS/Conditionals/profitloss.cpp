#include <iostream>
using namespace std;
int main(){
    //If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
    int c,s;
    cout<<"Enter Cost Price : ";
    cin>>c;
    cout<<"Enter Selling Price : ";
    cin>>s;
    int n;
    n = s-c;
    if (c>s){
       cout<<"Loss of : "<<-n; 
    }
    if(s>c) {cout<<"Profit of : "<<n; //else is c<=s
    }
    if (s==c){
        cout<<"No Profit No loss";
    }

}