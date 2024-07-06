#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n to get nth Febonacci : ";
    cin>>n;
    int n1=0,n2=1,n3,n4,sum=0,sum2;
    for (int i=1; i<=(n-1); i++){
        sum=n1+n2;
        n1=n2;
        n2=sum;
    }
    cout<<n<<"th Febonacci no. is : "<<sum;
} 