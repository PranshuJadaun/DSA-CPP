// Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]
#include <iostream>
using namespace std;
void lmarks(int arr[]){
    for(int i=0; i<7; i++){
        if(arr[i]<35) cout<<i<<endl;
    }
}
int main(){
    int arr[7]={67,21,56,34,66,32,12};
    lmarks(arr);
}