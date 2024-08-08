//Ques: Count the number of elements strictly greater than x in the given array.
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
    //INPUT X//
    int x;
    cout<<"Enter value x : ";
    cin>>x;
    //PROBLEM SOLVING//
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]>x) count++;
    }
    cout<<"Total no. above then "<<x<<" : "<<count;
}