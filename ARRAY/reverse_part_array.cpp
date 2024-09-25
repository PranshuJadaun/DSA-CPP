#include <iostream>
#include <vector>
using namespace std;
void reverse_part(vector <int> &m, int u,int v){
    while(u<v){
        int temp;
        temp=m[u];
        m[u]=m[v];
        m[v]=temp;
        u++;
        v--;
    }
}
void reverse_array(vector <int> &t, int k){
    reverse_part(t,0,t.size()-k-1);
    reverse_part(t,t.size()-k,t.size()-1);
    reverse_part(t,0,t.size()-1);
    return;
}
int main(){
    vector <int> h;
    h.push_back(4);
    h.push_back(1);
    h.push_back(7);
    h.push_back(9);
    h.push_back(3);
    h.push_back(2);
    int k = 2; 
    reverse_array(h,k);
    for(int i=0; i<h.size(); i++ ){
        cout<<h[i]<<", ";
    }
}