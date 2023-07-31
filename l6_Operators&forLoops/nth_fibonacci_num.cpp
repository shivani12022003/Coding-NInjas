#include <iostream>
using namespace std;
/* by recursion
int fibo_recursive(int n){
    if(n<=0){
        return 0;
    }
    if(n<=2){
        return 1;
    }
    return fibo_recursive(n-1)+fibo_recursive(n-2);
}*/
int fibonacci(int n){
  int a=1,b=1;
  for(int i=2; i<n; i++){
  int c=a+b;
  a=b;
  b=c;
  }
 return b;
}
int main(){
      int n;
      cin>>n;
    cout<<fibonacci(n)<<endl;
   // cout<<fibo_recursive(n)<<endl; // for recursive function
    return 0;
}