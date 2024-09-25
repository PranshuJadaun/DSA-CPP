#include <iostream>
#include <vector>
using namespace std;
void sortof(vector <int> &m){
    for(int i=0; i<m.size()-1; i++){
        for(int j=i+1; j<m.size(); j++){
            if(m[i]>m[j]){
                swap(m[i],m[j]);
            }
        }
    }
}
int main(){
    vector <int> h;
    h.push_back(1);
    h.push_back(0);
    h.push_back(0);
    h.push_back(1);
    h.push_back(1);
    h.push_back(1);

    sortof(h);
    for(int i =0; i<h.size(); i++){
        cout<<h[i]<<", ";
    }

}