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
        cout<<"Enter "<<(i+1)<<" element of array : ";
        cin>>arr[i];
    }
    // FIND MAX FROM THE ARRAY
    int max=arr[0]; // Can use max=INT_MIN;
    for(int i=0; i<size; i++){
        if(max<arr[i]) max=arr[i];
    }
    // FIND 2nd MAX FROM THE ARRAY
    int smax=INT_MIN;
    for(int i=0; i<size; i++){
        // Condition : 2nd_max_value < arr[i] but not eqaul to max_value.
        if(smax<arr[i] && arr[i]!=max) smax=arr[i];
    }
    cout<<"2nd Max value in array : "<<smax;
}