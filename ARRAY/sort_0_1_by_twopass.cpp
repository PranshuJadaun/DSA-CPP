#include <iostream>
#include <vector>
using namespace std;
void sort_by_twopass(vector <int> &m){
    int zero, ones;
    zero = 0;
    ones = 0;
    for(int i = 0; i<m.size(); i++){
        if(m[i]==0){
            zero++;
        }
        if(m[i]==1){
            ones++;
        }
    }
    // for(int i = 0; i<m.size(); i++){
    //     m.pop_back();
    // }
    for(int i=0; i<zero; i++){
        m[i]=0;
    }
    for(int i=zero; i<m.size(); i++){
        m[i]=1;
    }
}
int main(){
    vector <int> h;
    h.push_back(1);
    h.push_back(1);
    h.push_back(0);
    h.push_back(1);
    h.push_back(0);
    h.push_back(1);

    sort_by_twopass(h);
    for(int i=0; i<h.size(); i++){
        cout<<h[i]<<", ";
    }
}