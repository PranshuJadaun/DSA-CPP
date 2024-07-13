#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of number triangle : ";
    cin>>n;
    for(int i =1; n>=i; i++){
        for(int j=1; i>=j; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}