#include <iostream>
using namespace std;
int main(){
    int n,fac,lum=1,tree;
    cout<<"Enter n to get n! : ";
    cin>>n;
    //for (int i=1; n>=i; i++){
    //    fac = i*lum;
    //    lum = fac;
    //}
    int product=1;
    for (int i=1;i<=n;i++){
        product*=i;
    }
    tree =n;
    int put=1;
    while(tree>0){
        fac = put;
        put = fac*tree;
        tree--;
    } 
    cout<<"Factorial of "<<n<<" is : "<<put;
}