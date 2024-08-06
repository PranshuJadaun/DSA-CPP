#include <iostream>
using namespace std;
int main(){
    int x = 30;
    int* ptr = &x;
    cout<<"Address of P : "<<&ptr<<endl;
    cout<<"Value store at this Address : "<<*ptr<<endl;
    ptr = ptr+1;
    cout<<"Address of P : "<<&ptr<<endl;
    cout<<"Value store at this Address : "<<*ptr; 
    // gives us garbage value //
}