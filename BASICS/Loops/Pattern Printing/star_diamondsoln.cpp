#include <iostream>
using namespace std;
int main(){
    int n,nst,nsp;
    cout<<"Enter value of Star Diamond : ";
    cin>>n;
    nsp = n-1;
    nst = 1;
    for(int i=1; i<=n-1; i++){
        if(i<=n){
            for(int j=1; j<nsp; j++){
                cout<<"  ";
            }
            nsp--;
            for(int k=1; k<=nst; k++)
                cout<<"* ";  
        }
        if(n<i){
            nsp=0;
            nst=2*n-(n+1);
            for(int j=1; nst<=n-1; nst++){
                cout<<"  ";
            for(int k=1; k<nst; k++){
                cout<<"* ";
            }

            }
        }
        nst+=2;

        cout<<endl;
    }
}