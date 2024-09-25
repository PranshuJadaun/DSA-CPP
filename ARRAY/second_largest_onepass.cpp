//Find the second largest element in the given Array in one pass.
#include <iostream>
#include <vector>
using namespace std;
int second(vector <int> &m){
    int l=0;
    int l2=0;
    for(int i=0; i<m.size(); i++){
        if(m[i]>l){
            l2=l;
            l=m[i];
        }
    }
    return l2;
}
int main(){
    vector <int> h;
    h.push_back(12);
    h.push_back(35);
    h.push_back(1);
    h.push_back(10);
    h.push_back(34);
    h.push_back(1);
    cout<<second(h);
}