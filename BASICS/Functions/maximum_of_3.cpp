#include <iostream>
using namespace std;
int maxu(int a, int b, int c){
    int x;
    if(a>b && a>c) x=a;
    else if(b>a && b>c) x=b;
    else if(c>b && c>a) x=c;
    return x;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maxu(a,b,c);

}