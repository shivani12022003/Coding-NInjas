#include<iostream>
using namespace std;
int nature(int n ){
    if(n>0){
        return 1;
    }else if (n<0){
        return -1;
    }else if(n==0){
        return 0;
    }
}
int main(){
     int t;
     cout<<"Enter the number of test cases to run: "<<endl;
     cin>>t;
     while(t--){
        int n ;
        cout<<"Enter number n : "<<endl;
        cin>>n;
        cout<<nature(n)<<endl;
     }
}