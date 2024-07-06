#include <iostream>
using namespace std;
int main(){
    int n,add=0,num,sum;
    cout<<"Enter upto n : ";
    cin>>n;
    for(int i=1;(n)>=i;i++){
        add = i*(-1)*pow(-1,i);
        num = add;
        sum = sum + num;
        
    }
    cout<<add;

}