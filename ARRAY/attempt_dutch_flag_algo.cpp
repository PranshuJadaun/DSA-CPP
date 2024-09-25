#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> h;
    h.push_back(2);
    h.push_back(1);
    h.push_back(0);
    h.push_back(0);
    h.push_back(1);
    h.push_back(1);
    h.push_back(0);
    h.push_back(2);
    h.push_back(2);
    int *ptr1=&h[0]-1;
    int *ptr2=&h[h.size()];
    for(int i=0; i<h.size(); i++){
        if(h[i]==0){
            ptr1++; 
        }
        if(h[i]==2){
            ptr2--;
        }
        if(ptr1<&h[i] && ptr2>&h[i]){
            h[i]=1;
        }
        *ptr1=0;
        *ptr2=2;
    }
    
    for(int i=0; i<h.size(); i++){
        cout<<h[i]<<", ";
    }


}