#include <iostream>
#include <vector>
using namespace std;
int find_small(vector <int> &m){
    int small=m[0];
    for(int i=1; i<m.size(); i++){
        if(small>m[i]){
            small = m[i];
        }
    }
    return small;
}
int main(){
    vector<int> h;  
    h.push_back(9);
    h.push_back(2);
    h.push_back(4);
    h.push_back(8);
    h.push_back(2);
    h.push_back(6);
    cout << find_small(h);
    return 0;
}