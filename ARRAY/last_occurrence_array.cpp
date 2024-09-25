//Ques: Find the last occurrence of x in the array.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> h;
    h.push_back(9);
    h.push_back(10);
    h.push_back(28);
    h.push_back(4);
    h.push_back(3);
    h.push_back(1);
    h.push_back(2);
    h.push_back(4);
    int x;
    cout<<"Enter value of X : ";
    cin>>x;
    int idx;
    for(int i=0; i<h.size(); i++){ // Optimised start from back;
        if(x==h[i]){
            idx=i;
        }
    }
    cout<<"Last Occurrence : "<<idx;

}