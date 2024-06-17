#include <iostream>
using namespace std;
int main(){
    //Ques : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
    int year;
    cout<<"Enter a year : ";
    cin>>year;
    if(year%4==0){
        cout<<year<<" is a leap year";
    }
    else {
        cout<<year<<" is not a leap year";
    }
}