 /*
      Most important method.
      can also be done by recurssion 
 */

 // Function wala global wale ko uthaega.

 #include <iostream>
 using namespace std;
 int global_variable = 2; // global variable.
 int hcf(int a, int b){  // formal parameters (agar value deni hai toh subko value)
    int hcf=1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            hcf = i; // or can be write as return = i;
        }
    }
    return hcf;
 }
 int opt_hcf(int a, int b){
   int hcf=1; // local variable.
   for(int i=min(a,b); i>1; i--){
      hcf = i; // make it global
      break;
   }
   return hcf;
 }
 int main(){

    int global_variable = 2; // will update it locally.
    global_variable = 5; // will update it globally.

    int a,b;
    cout<<"Enter 1st No. : ";
    cin>>a;
    cout<<"Enter 2nd No. : ";
    cin>>b;
    cout<<"HCF of "<<a<<" and "<<b<<" is : "<<hcf(a,b)<<endl;  // actual prameters n
    cout<<"HCF of "<<a<<" and "<<b<<" is : "<<opt_hcf(a,b);
 }