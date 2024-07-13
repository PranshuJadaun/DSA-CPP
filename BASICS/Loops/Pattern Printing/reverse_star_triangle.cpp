/*  Print this Pattern
    * * * *
    * * *
    * *
    *
*/
#include <iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter side of reverse Star Triangle : ";
    cin>>t;
    for(int i=t; i>0; i--){
        for(int j=1; i>=j;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}