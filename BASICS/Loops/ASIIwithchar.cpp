#include <iostream>
using namespace std;
int main(){
    for (int i=65;i<=122; i++){
        char ch = (char)i;
        if((i>=65 && i<90) || (i>=97 && i<=122))cout<<ch<<" = "<<i<<endl;
    }
}