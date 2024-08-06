#include <iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    cout<<ptr<<endl; 
    ptr = ptr + 1;
    cout<<ptr<<endl; // increase 4 bytes to pointer (int increases 4 bytes)
    bool time = true;
    bool* flag = &time;
    cout<<"Address of pint : "<<&flag<<endl;
    flag = flag + 1;
    cout<<"Address of upin : "<<flag<<endl; // inside address of time.
    cout<<"Address of updt : "<<flag<<endl; // increase by 1 bytes to pointer.
    cout<<"Address of pntr : "<<&flag<<endl;
    cout<<"Address of Time : "<<&time ;

}