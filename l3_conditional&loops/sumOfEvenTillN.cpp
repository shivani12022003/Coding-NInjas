#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int sum=0;
    //{ USING WHILE LOOP }
    int i=0;
    while(i<=n){
        sum+=i;
        i+=2;
    }

     /*{ USING FOR LOOP }
     for(int i=0; i<=n; i+=2){
        sum+=i;
     }*/
     cout<<"Sum of even numbers till n: "<<sum<<endl;
}