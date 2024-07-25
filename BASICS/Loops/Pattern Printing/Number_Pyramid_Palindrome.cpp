#include <iostream>
using namespace std;
int main(){
    int n,pint=1,lint,zint;
    cout<<"Enter value of Palindrome Triangle : ";
    cin>>n;
    zint=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<pint<<" ";
            pint++;
        }
        int hello=i-1;
        for(int lint=1; (lint+1)<=i; lint++){
            
            
            cout<<hello<<" ";
            hello--;
        }
        cout<<endl;
        pint=1;
    }

}