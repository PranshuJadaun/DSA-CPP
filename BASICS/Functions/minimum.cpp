#include <iostream>
using namespace std;
int mini(int x, int y){
    int a;
    if(x>y) a=y;
    else a=x;
    return a;
}
int main(){
    int x, y;
    cout<<"Enter two integer to get minimum of them : ";
    cin>>x>>y;
    cout<<mini(x,y);
}