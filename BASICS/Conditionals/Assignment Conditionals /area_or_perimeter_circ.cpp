#include <iostream>
using namespace std;
int main(){
    //Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
    float radius;
    cout<<"Enter radius : ";
    cin>>radius;
    float area=(3.14159)*radius*radius;
    float peri=(3.14159)*2*radius;
    cout<<"Area : "<<area<<endl<<"Perimeter : "<<peri<<endl;
    if (area>peri){
        cout<<"Area is greater than Perimeter";
    }
    else {
        cout<<"Perimeter is greater than Area";
    }
}