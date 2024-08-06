#include <iostream>
using namespace std;
void swapi(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    int* x= &a;
    int* y= &b;
    swapi(x,y);
    cout<<a<<" "<<b;
}