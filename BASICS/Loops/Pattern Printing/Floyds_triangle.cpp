/*
    1
    2 3
    4 5 6
    7 8 9 10
*/
#include <iostream>
using namespace std;
int main(){
    int n,store=1;
    cout<<"Enter value of Floyd's Triangle : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<store<<" ";
            store+=1;
        }
        cout<<endl;
    }
}