#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of Star Pyramid : ";
    cin>>n;
    for(int i=1; n>=i; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        for(int p=1; 1<p && p<=i; p++){
            cout<<"* ";
        }
        cout<<endl;
    }
}