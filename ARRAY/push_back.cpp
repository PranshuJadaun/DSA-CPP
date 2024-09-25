#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> hello;
    hello.push_back(2);
    cout<<hello.capacity()<<endl;;
    hello.push_back(3);
    hello.push_back(4);
    hello.push_back(3);
    hello.push_back(4);
    cout<<hello.capacity()<<endl;;
    cout<<hello[0]<<" ";
    cout<<hello[1];
}