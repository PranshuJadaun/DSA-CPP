#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of STAR TRIANGLE FLIPPED : ";
    cin>>n;
    int less=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
                if (j<less) cout<<"  ";
                else cout<<"* ";
        }
        cout<<endl;
        less--;
    }
}