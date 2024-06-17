#include <iostream>
using namespace std;
int main(){
    //Ques : Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
    int x,y;
    cout<<"Enter x-coordinate : ";
    cin>>x;
    cout<<"Enter y-coordinate : ";
    cin>>y;
    if(y==0){
        if (x==0) cout<<"Point is on : Origin";
        else cout<<"Point is on X-axis";
    }
    else if (x==0) cout<<"Point is on : Y-axis";
    else cout<<"Pont is not on Origin, X-axis, Y-axis";
}