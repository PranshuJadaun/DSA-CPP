#include <iostream>
using namespace std;
int main(){
    int p;
    cout<<"Enter value of star Triangle : ";
    cin>>p;
    for(int i=1;p>=i;i++){
        for(int j=1; p>=j;j++){
            for(int t=1; j>=t; t++){
                cout<<"*";
            }
        }
        cout<<endl;
    } 
}