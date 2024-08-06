/*
                      1
                   1  2  1
                  1  3  3  1
                 1  4  6  4  1         [Pacal Triangle]
                1  5 10 10  5  1

                [Simplified]

                   0  1  2  3  4  5

               0   1
               1   1  2  1
               2   1  3  3  1
               3   1  4  6  4  1
               4   1  5  10 10 5  1

                    [Observation]
                        0  1  2  3  4  5

                    0   1
                    1   1  2  1                         n                    row
                    2   1  3 (x) 1                 x =   C  = n!/r!(n-r)! =     C        
                    3   1  4  6  4  1                     r                      column
                    4   1  5  10 10 5  1
                                                                          =  (row)!/{(column)!(row-column)!}
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
            cout<<combi(i,column);
            cout<<" ";
        }
        cout<<endl;
    }
}