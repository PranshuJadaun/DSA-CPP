//Ques: Check if the given array is sorted or not.
#include <iostream>
using namespace std;
int main(){
    //CREATION OF ARRAY
    int size;
    cout<<"Enter size of ARRAY : ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    //Sorted Problem
    bool flag = false;
    for(int i=1; i<size; i++){
        if(arr[i-1]<=arr[i]) flag = true;
        else{ 
            flag=false;
            break; 
        }
    }
    if(flag==true) cout<<"ARRAY : SORTED";
    else cout<<"ARRAY : NOT SORTED";
}