#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value to see its half fractional part : ";
    float x;
    cin>>x;
    float t = x/2;
    int p = (int)t;
    cout<<t-p;
}