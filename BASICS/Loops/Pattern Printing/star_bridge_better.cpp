#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of Star Triangle : ";
    cin>>n;
    int nln = n-1;
        for(int q=1; q<=2*n-1; q++){
            cout<<"* ";
            
        }
        cout<<endl;
        for(int j=1; j<=n-1; j++){
            for(int z=1; z<=nln+1-j; z++){
                cout<<"* ";
            }
            for(int p=1; p<=2*j-1; p++){
                cout<<"  ";
            }
            for(int t=1; t<=nln+1-j; t++){
                cout<<"* ";
            }
            cout<<endl;
        }
}
