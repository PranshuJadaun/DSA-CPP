#include <iostream>
using namespace std;
int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    if((s1==s2 && s3==s4) || (s1==s3 && s2==s1 || s4==s1 && s2==s3)){
        cout<<"Yes";
    }
    else cout<<"No";
}