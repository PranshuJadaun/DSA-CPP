#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int* x=&a;
    int* y=&b;
    cin>>*x>>*y;
    cout<<a+b;
}