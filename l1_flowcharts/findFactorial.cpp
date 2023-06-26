# include <iostream>
 using namespace std;
 int printFactorial(int n){
    int ans=n*printFactorial(n-1);// in doubt 
    
    /*using loops 
    for(int i=n; i>0; i--){
     ans*=i;
    }*/
    return ans;
 } 
 int main (){
     int t;
     cout<<"Enter the number of test cases:"<<endl;
     cin>>t;
     while(t--){
        int n;
        cout<<"Enter the number for factorial"<<endl;
        cin>>n;
        cout<<"Factorial: "<<printFactorial(n)<<endl;
     }

 }