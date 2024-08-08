//Ques: Count the number of elements in given array greater than a given number x.
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,4,5,1};
    int x;
    cout<<"Enter x to check times repeated : ";
    cin>>x;
    int times=0;
    for(int i=0; i<5; i++){
        if(x==arr[i]) times++;
    }
    if(times!=0){
        cout<<"Value "<<x<<" Times repeated : "<<times;
    }
    else cout<<"Value "<<x<<" NOT FOUND"; 
}