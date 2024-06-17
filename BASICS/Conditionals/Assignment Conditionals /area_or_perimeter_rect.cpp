#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter length : ";
    cin>>x;
    cout<<"Enter breadth : ";
    cin>>y;
    int area=x*y, peri=2*(x+y);
    if (area>peri){
        cout<<"Area is greater then Perimeter Numerically by : "<<area-peri;
    }
    else {
        cout<<"Perimeter is greater then Area Numerically by : "<<peri-area;
    }

}