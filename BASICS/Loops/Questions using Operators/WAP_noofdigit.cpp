#include<iostream>
using namespace std;
int main(){
    int i;
    int t = 0;
    //cout<<"Enter a Integer : ";
    cin>>i;
    //while(1){ // 
    while(i>=0){
        t++;
        i = i/10;
        if (i<1) break;
    }
    //cout<<"No. of Digits : "<<t;
}