#include <iostream>
using namespace std;
int main(){
    int x;  //dabba bn gya
    int* p = &x; // &x = address of x. && address of x is storing in p.
    // int* is another datatype like int   [int *p == int* p]
    // int ke address ko store krne ke liye int* p or int *p
    // float ke address ko store krne ke liye float* p or float *p //same for other

    // ## DEREFERENCE OPERATORS ## (5*) also as STAR OPERATOR
            int x = 10;
            int* p = &x;
            cout<<p<<endl;
            cout<<*p;
}