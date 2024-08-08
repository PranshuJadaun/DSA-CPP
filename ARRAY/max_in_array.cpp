//Ques: Find the maximum value out of all the elements in the array.
#include <iostream>
using namespace std;
int main(){
    // Enter Size of Array
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    // Initialise array with size
    int arr[size];
    // Enter value of each element of Array using loops
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    // FIND MAX FROM THE ARRAY
    int max=arr[0]; // Can use max=INT_MIN;
    for(int i=0; i<size; i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"Max value in array : "<<max;
}