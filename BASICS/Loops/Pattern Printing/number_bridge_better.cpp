#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of Number Bridge : ";
    cin>>n;
    int a=1;
    for (int p=1; p<=2*n-1; p++){
        cout<<p<<" ";
    }
    cout<<endl;
    int line=n-1;
    for(int i=1; i<=line; i++){
        a=1;
        for(int j=1; j<=line+1-i; j++){
            cout<<a<<" ";
            a++;
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"  ";
            a++;
        }
        for(int l=1; l<=line+1-i; l++){
            cout<<a<<" ";
            a++;

        }
        cout<<endl;
    }
}