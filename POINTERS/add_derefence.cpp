#include <iostream>
using namespace std;
int main(){
    int a=100;
    int b=200;
    int* x=&a;
    int* y=&b;
    cout<<(*x)+(*y);
}