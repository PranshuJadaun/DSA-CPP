// Ques: Find the doublet in the Array whose sum is equal to the given value x.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter value of x : ";
    cin>>x;
    vector<int> h;
    h.push_back(2);  //0
    h.push_back(21); //1
    h.push_back(12); //2
    h.push_back(22); //3
    h.push_back(6);  //4
    h.push_back(8);  //5
    h.push_back(3);  //6
    h.push_back(9);  //7
    h.push_back(14); //8
    h.push_back(17); //9
    int add;
    for(int i=0; i<h.size(); i++){
        add=h[i];
        int p;
        p=i;
        for(int j=p+1; j<h.size(); j++){
            if((h[p]+h[j])==x){
                cout<<p<<" and "<<j<<endl;
            }
        }
    }
}