#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value for Alphabet Square : ";
    cin>>n;
    for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++ ){
            char p= char(j+64);
            cout<<p<<" ";
            }
            cout<<endl;
    }
    
}