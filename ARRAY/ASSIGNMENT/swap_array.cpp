#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<  hjkl;
    ;   =a.size(); i++){
        cout<<a[i]<<", ";
    }
    cout<<endl;
}
int main(){
    vector<int> h;
    h.push_back(6);
    h.push_back(4);
    h.push_back(8);
    h.push_back(9);
    h.push_back(0);
    h.push_back(1);
    int i=0;
    int j=h.size()-1;
    cout<<h.size()<<endl;
    display(h);
    while(i<=j){
        swap(h[i],h[j]);
        i++;
        j--;
    }
    display(h);
}