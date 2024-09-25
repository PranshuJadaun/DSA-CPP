//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include <iostream>
#include <vector>
using namespace std;
int find_diff(vector <int> &m){
    int even=0;
    int odd=0;
    for(int i=0; i<m.size(); i++){
        if(i%2==0){
            even = m[i]+even;
        }
        else{ 
            odd = odd + m[i];
        }
    }
    return even-odd;
}
int main(){
    vector <int> h;
    h.push_back(3);
    h.push_back(5);
    h.push_back(1);
    h.push_back(2);
    h.push_back(9);
    h.push_back(3);
    cout<<find_diff(h);
}