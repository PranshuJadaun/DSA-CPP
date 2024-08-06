#include <iostream>
using namespace std;
int main(){
    int arr[]={4,6,4,2,12,4,6,78,5,34,2,24,5,623,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of Full array : "<<sizeof(arr)<<endl;
    cout<<"Size of single element in array : "<<sizeof(arr[0])<<endl;
    cout<<n;
}