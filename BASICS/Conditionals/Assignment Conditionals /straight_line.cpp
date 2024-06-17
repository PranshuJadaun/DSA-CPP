#include <iostream>
using namespace std;
int main(){
    //Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter Coordinate of point 1 : "; 
    cin>>x1>>y1;
    cout<<"Enter Coordinate of point 2 : ";
    cin>>x2>>y2;
    cout<<"Enter Coordinate of point 3 : ";
    cin>>x3>>y3;
    float sl1=(y2-y1)/(x2-x1);
    float sl2=(y3-y2)/(x3-x2);
    float sl3=(y3-y1)/x3-x1;
    if (sl1==sl2 && sl2==sl3) cout<<"It is a Straight Line";
    else cout<<"It is not a Straight Line";
}