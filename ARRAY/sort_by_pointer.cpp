#include <iostream>
#include <vector>
using namespace std;
void sort_bro(vector <int> &m,int *ini, int *fin){
    int zero;
    int ones;
    for(int i=0; i<m.size(); i++){
        if(m[i]==0) zero++;
        if(m[i]==1) ones++;
    }
    for(int i=0; i<m.size(); i++){
        if(i<zero){
            *ini = 0;
            ini++;
        }
        if(i>=zero){
            *fin = 1;
            fin--;
        }
    }
}
int main(){
    vector <int> h;
    h.push_back(1);
    h.push_back(0);
    h.push_back(0);
    h.push_back(1);
    h.push_back(0);
    h.push_back(1);
    int *p1 = &h[0];
    int *p2 = &h[h.size()-1];
    sort_bro(h,p1,p2);
    for(int i=0; i<h.size(); i++){
        cout<<h[i]<<", ";
    }
}