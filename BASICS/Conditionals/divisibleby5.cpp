#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a Integer : ";
    int i;
    cin>>i;
    if (i%3==0){ //Divisible by 3 is clear.
        if(i%5==0){
            cout<<"Its is divisible by 3 and 5";
        }
        else{
            cout<<"Its is divisible by only 3";
        }
    }
    else if (i%5==0) //suruwat me 3 check kr liya hai
    {
        cout<<"It is divisible by only 5";
    }
    else{
        cout<<"It is not divisible by 3 and 5.";
    }
    

}