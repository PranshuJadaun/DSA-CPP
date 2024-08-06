#include <iostream>
using namespace std;
void firstlast(int n, int* pt1, int* pt2){
    *pt2 = n%10;
    while(n>9){
        n=n/10;
    }
    *pt1 = n;
}
int main(){
    int n;
    cin>>n;
    int first;
    int last;
    int* pt1 = &first;
    int* pt2 = &last;
    firstlast(n,pt1,pt2);
    cout<<*pt1<<" "<<*pt2;
}