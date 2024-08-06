#include <iostream>
using namespace std;
void breaker(int a){
    int blow[]={0};
    int divider = a;
    int times =0;
    for(int i=0; divider>0; i++){
        blow[i] = divider%10; 
        divider = divider/10;
        times++;
    }
    for(int i=0; times/2>i; i++){
        int temp;
        temp = blow[i];
        blow[i] = blow[times-1-i];
        blow[times-1-i] = temp; 

    }
    cout<<"1st Integer : "<<blow[0]<<endl<<"End Integer : "<<blow[times-1];
}
int main(){
    int a;
    
    cin>>a;
    breaker(a);
    
    
}