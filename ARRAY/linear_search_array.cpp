#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    //Input Array
    for(int i = 0; i<size; i++){
        cout<<"Enter "<<(i+1)<<" element of array : ";
        cin>>arr[i];
    }
    //Search x in array
    cout<<"Enter value to search : ";
    int x;
    cin>>x;
    int found=0;
    for(int i = 0; i<size; i++){
        if(arr[i]==x){
            found = 1;
            break;
        }
    }
    if(found) cout<<x<<" : is FOUND in array";
    else cout<<"x : is NOT FOUND in array";

}