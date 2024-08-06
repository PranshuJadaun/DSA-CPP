#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int* ptr = &n;
    int** p = &ptr;
    cout<<"ACTUAL STORED"<<endl;
    cout<<"Value of n : "<<n<<endl;
    cout<<"Value of p1 : "<<ptr<<endl;
    cout<<"value of p2 : "<<p<<endl;

    cout<<"STAR STORED"<<endl;
    cout<<"Value of n : "<<n<<endl;
    cout<<"Value of *p1 : "<<*ptr<<endl;
    cout<<"value of *p2 : "<<*p<<endl; // giving address of n



    
}