#include <iostream>
using namespace std;
int main(){
    int num,loop,count=0, sum=0,add=0;
    cout<<"Enter a Number : ";
    cin>>num;
    loop=num;
    while(loop>0){
        count++;
        loop=loop/10;
    }
    int num1,num2,chang=count-1;
    for(int i=1; count>=i; i++){
        num1 = num%(10);
        add = add*10;
        add = add + (num1);
        num = num/10;
    }
    cout<<add;
}