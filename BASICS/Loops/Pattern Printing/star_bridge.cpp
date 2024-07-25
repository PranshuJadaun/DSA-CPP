/*
    * * * * * * *
    * * *   * * *    [STAR BRIDGE]
    * *       * *    when n = 4
    *           *
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of Star Bridge : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"* ";
        }
        if(i>1){
            int p =i;
            p=p-1;
            for(int k=1; k<=(2*(p)-1); k++){
                cout<<"  ";
            }
        }
        if (i==1){
            for(int o=1; o<=n-1; o++){
                cout<<"* ";
            }
        }
        if(i>1){
            int u=i;
            u=u-1;
            for(int l=1; l<=n+1-i; l++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}