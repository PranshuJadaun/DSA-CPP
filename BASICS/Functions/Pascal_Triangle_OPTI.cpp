/*
        [OPTIMISED CODE FOR COMBINATION]
            n
             C   =  [{n-(r-1)}/(r-1)+1]*[n!/{(r-1)!*(n-r+1)}]
              r
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
int combi(int row, int column){
    int atx;
    atx = facto(row)/(facto(column)*facto(row-column));
    return atx;
}
int copt(int row, int column){
    int rtx;
    int n = row;
    int r = column-1;
    rtx = ((n-r)/(r+1))*(facto(n)/(facto(r)*facto(n-r)));
    return rtx;
}
void spaces(int row){
    for(int i=1; i<=row-1; i++){
        for(int j=1; j<=row+1-i; j++){
            cout<<" ";
        }
    }
}
int main(){
    int row;
    cout<<"Enter value of Pascal Triangle : ";
    cin>>row;
    for(int i=0; i<=row-1; i++){
        for(int k=1; k<=row-i-1; k++){
            cout<<" ";
        }
        for(int column=0; column<=i; column++){
            cout<<copt(i,column);
            cout<<" ";
        }
        cout<<endl;
    }
}