#include <iostream>
#include <vector>
using namespace std;
int pro_arr(vector <int> &m){
    int product=1;
    for(int i=0; i<m.size(); i++){
        product = product*m[i];
    }
    return product;
}
int main(){
    vector <int> h;
    h.push_back(3);
    h.push_back(5);
    h.push_back(2);
    h.push_back(1);
    h.push_back(8);
    h.push_back(6);
    cout<<pro_arr(h);

}