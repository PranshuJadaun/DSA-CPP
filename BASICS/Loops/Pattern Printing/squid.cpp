/*
    4 4 4 4
    4 3 3 3
    4 3 2 2
    4 3 2 1
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int box1=n;
    cout<<endl;
    for(int i=1; i<=n; i++){
        box1=n;
        for(int j=1; j<=n; j++){
                if(i>j){
                    cout<<box1;
                    box1--;
                }
                else {
                    cout<<box1;
                }
        }
    cout<<endl;
    }
}