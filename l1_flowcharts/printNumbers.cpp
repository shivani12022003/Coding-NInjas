# include <iostream>
using namespace std;
bool checkPrime(int n){
   for(int i=2; i<n/2; i++){
    if(n%i==0){
        return false;
    }else{
        return true ;
    }
   }
}
int main(){
   int t;
   cin>>t;
    while(t--){
        int n;
        cin>>n;
        checkPrime(n)
    }
}