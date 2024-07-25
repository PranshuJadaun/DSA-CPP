#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of Number Triangle : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        //For spaces
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}