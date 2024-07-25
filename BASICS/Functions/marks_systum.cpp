#include <iostream>
using namespace std;
char marks(int n){
    char a;
    if(n>=90){a=65;}
    else if(n>=80) a=66;
    else if(n>=70) a=67;
    else if(n>=60) a=68;
    else if(n>=50) a=69;
    else if(n>=40) a=70;
    return a;
}
int main(){
    int n;
    cin>>n;
    marks(n);
}