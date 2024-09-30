#include <iostream>
using namespace std;
double cal(long long r){
    double gb;
    gb = 256*r/(1024.0*1024.0);
    return gb;
}
int main(){
    long long t,r;
    cout<<"Enter Packet Rx :";
    cin>>r;
    int gb = cal(r);
    cout<<"Total used Data : "<<gb<<" GB";
    return 0;

}