#include <iostream>
#include <vector>
using namespace std;
void sec_reverse(vector <int> &m, int u,int v){
    while(u<v){
        int temp;
        temp=m[u];
        m[u]=m[v];
        m[v]=temp;
        u++;
        v--;
    }
}
int main(){
    vector <int> h;
    h.push_back(2);
    h.push_back(5);
    h.push_back(7);
    h.push_back(9);
    h.push_back(1);
    h.push_back(4);
    sec_reverse(h,0,2);
    for (int i = 0; i < h.size(); i++)
    {
        cout<<h[i]<<", ";
    }
    
    
}