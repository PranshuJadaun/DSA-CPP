#include <iostream>
#include <vector>
using namespace std;
void reverse_array(vector <int> &h){
    int i = 0;
    int j = h.size()-1;
    while(i<j)
    {
        int temp;
        temp=h[i];
        h[i]=h[j];
        h[j]=temp;
        j--;
        i++;
    }
    
}
int main(){
    vector <int> h;
    h.push_back(2);
    h.push_back(3);
    h.push_back(5);
    h.push_back(8);
    h.push_back(1);
    h.push_back(4);
    reverse_array(h);
    for(int i =0; i<h.size(); i++){
        cout<<h[i]<<", ";
    }
}