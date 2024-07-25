/*
    1 2 3 4 5 6 7
    1 2 3   5 6 7
    1 2       6 7
    1           7
                    [NUMBER BRIDGE]
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of Number Bridge : ";
    cin>>n;
    for(int p=1; p<=2*n-1; p++){
        cout<<p<<" ";
    }
    cout<<endl;
    int line=n-1;
    for(int i=1; i<=line; i++){
        for(int j=1; j<=line+1-i; j++){
            cout<<j<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"  ";
        }
        for(int m=1; m<=line+1-i; m++){
            cout<<n+m+i-1<<" "; // m+i+line
        }
        cout<<endl;
    }

}