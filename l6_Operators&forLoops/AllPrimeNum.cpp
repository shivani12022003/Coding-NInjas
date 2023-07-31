#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime=true;
// time complexity high
for(int j=2; j<=n; j++){
    for(int i=2; i<=j/2; i++){
        if(j%i==0){
            isPrime=false;
            break;
        }else {
            isPrime=true;
        } 
    }
     if(isPrime==true && n!=1){
        cout<<j<<endl;
    }
}
}