//Ques: WAP to find the largest three elements in the array.
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
    //PROBLEM SOLVING//
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max || arr[i]==max ){
            tmax=smax;
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax){
            tmax=smax;
            smax=arr[i];
        }
        else if(arr[i]>tmax){
            tmax=arr[i];
        }
    }
    cout<<"1st Largest : "<<max<<endl;
    cout<<"2nd Largest : "<<smax<<endl;
    cout<<"3rd Largest : "<<tmax;
}