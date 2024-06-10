#include <iostream>
using namespace std;
int main(){
    cout<<"A.P. upto : ";
    int p,t=4;
    cin>>p;
    for (int i=1;i<=p;i++){
        cout<<t<<", ";
        t = t + 3;
    }
}