//Count the number of elements strictly greater than x.
#include <iostream>
#include <vector>
using namespace std;
int c_str(vector <int> &m, int p){
    int count=0;
    for(int i=0; i<m.size(); i++){
        if(m[i]>p){
            count++;
        }
    }
    return count;
}
int main(){
    int x;
    cout<<"Enter x : ";
    cin>>x;
    vector <int> h;
    h.push_back(1);
    h.push_back(3);
    h.push_back(5);
    h.push_back(4);
    h.push_back(5);
    h.push_back(7);
    cout<<c_str(h,x);
}