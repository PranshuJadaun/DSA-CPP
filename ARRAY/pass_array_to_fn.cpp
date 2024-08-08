#include <iostream>
using namespace std;
void display(int a[]){ // Array recieving
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[5]={1,4,2,6,4};
    display(arr); // Array is passing 
    cout<<endl;
    change(arr);
    display(arr);
}