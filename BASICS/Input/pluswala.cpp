#include <iostream>
using namespace std;
int main(){
    int num1;
    int p = 5, q = 10;
    p += q -= p; //p is baap woh change nhi ho rha hai
    cout<<p<<" "<<q;
    return 0;
}