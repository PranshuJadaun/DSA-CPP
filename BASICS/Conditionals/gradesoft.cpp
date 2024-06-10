//Take input percentage of a student and print the Grade according to marks:
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter marks to get Grades : ";
    int i;
    cin>>i;
    if (0<=i && i<=100){ //yeh range bnata hai na ki justify kare (range justify karegi)
        if(i>=91){
            cout<<"Grade : Excellent";
        }
        else if (i>=81){
            cout<<"Grade : Very Good";
        }
        else if (i>=71){
            cout<<"Grade : Good";
        }
        else if (i>=61){
            cout<<"Grade : Can do better";
        }
        else if (i>=51){
            cout<<"Grade : Average";
        }
        else if (i>=41){
            cout<<"Grade : Below Average";
        }
        else if (i>=0){
            cout<<"Grade : Fail";
        }
    }
    else{
        cout<<"Enter realistic value.";
    }
}