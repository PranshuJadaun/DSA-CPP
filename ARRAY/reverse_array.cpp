// Ques: Write a program to copy the contents of one array into another in the reverse order.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //INPUT//
    int size;
    int n;
    cout<<"Enter size of array : ";
    cin>>size;
    vector<int> r;
    for(int i=0; i<size; i++){
        cin>>n;
        r.push_back(n);
    }
    //CHANGE//
    vector<int> rev;
    for(int i=size-1; i>=0; i--){
        rev.push_back(r[i]); 
    }
    //
    for(int i=0; i<rev.size(); i++){
        cout<<rev[i]<<", ";
    }
    
}