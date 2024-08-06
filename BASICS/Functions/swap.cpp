#include <iostream>
using namespace std;
int swapA(int a, int b){
    int ext=a;
    a=b;
    b=ext;
}
int main(){
    int a,b;
    cout<<"Enter A Number : ";
    cin>>a;
    cout<<"Enter B Number : ";
    cin>>b;
    cout<<swapA(a,b)<<endl;

}