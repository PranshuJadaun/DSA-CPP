#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st Side : ";
    cin>>a;
    cout<<"Enter 2nd Side : ";
    cin>>b;
    cout<<"Enter 3rd Side : ";
    cin>>c;
    if (a==b || c==a || b==c){
        if(b==c){
            cout<<"Triangle is : Equilateral";
        }
        else cout<<"Triangle is : Isosceles";
    }
    else cout<<"Triangle is : Scalen";
}
