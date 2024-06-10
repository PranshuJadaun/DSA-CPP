#include <iostream>
using namespace std;
int main(){
    cout<<"Enter an Integer to get absolute value : ";
    int i;
    cin>>i;
    if (i<0){
       i=-i;  // Optimisation by only updation and then printing.
    }
    cout<<i;
    
}
