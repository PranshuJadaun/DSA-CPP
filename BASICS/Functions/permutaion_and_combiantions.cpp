/*
        [COMBINATION]
            n
             C      = n!/r!(n-r)!
              r

        [PERMUTATION]
                    = n!/(n-r)!

*/
#include <iostream>
using namespace std;
int facto(int f){
    int multi= 1;
    for(int i=f; i>=1; i--){
        multi = multi*(i);
    }
    return multi;
}

int main(){
    int n;
    cin>>n;
    
}