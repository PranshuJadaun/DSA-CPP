#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter side of Square : ";
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}