#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter No. for Number Square : ";
    cin>>a;
    for(int i=1; a>=i; i++){
        for(int j=1; a>=j; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}