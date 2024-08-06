#include <iostream>
using namespace std;
int main(){
    cout<<"For Int";
    int arr[4] = {1,2,3,4};
    int* p = &arr[2];
    cout<<"Address stored in Pointer : "<<p<<endl;
    cout<<"Value for which pointer is pointing : "<<*p<<endl;
    p = p+1;
    cout<<"After Updation"<<endl;
    cout<<"Address stored in Pointer : "<<p<<endl;
    cout<<"Value for which pointer is pointing : "<<*p<<endl;
    cout<<"For Bool";
    int arr[4] = {true,false,true,false};
    int* p = &arr[2];
    cout<<"Address stored in Pointer : "<<p<<endl;
    cout<<"Value for which pointer is pointing : "<<*p<<endl;
    p = p+1;
    cout<<"After Updation"<<endl;
    cout<<"Address stored in Pointer : "<<p<<endl;
    cout<<"Value for which pointer is pointing : "<<*p<<endl;

}