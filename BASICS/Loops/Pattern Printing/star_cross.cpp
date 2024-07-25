#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of Star Cross : ";
    cin>>n;
    for(int i=1; n>=i; i++){
        for(int j=1; n>=j; j++){
            if(i==j || i+j==(n+1))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}