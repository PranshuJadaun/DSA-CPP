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
    int n,r;
    cout<<"Enter no. of item : ";
    cin>>n;
    cout<<"Enter no. of selection : ";
    cin>>r;
    long nr= long (facto(n-r));
    long nfac= long (facto(n));
    long rfac= long (facto(r));
    cout<<endl<<"Total no. of Combination : ";
    cout<<(nfac)/(rfac*nr);
    cout<<endl;
    cout<<"Total no. of Permutation : ";
    cout<<(nfac/nr);
}