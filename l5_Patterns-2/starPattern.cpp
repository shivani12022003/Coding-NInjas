/*
   *
  ***
 *****
*******
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     
     for(int i=1; i<=n; i++){
        // for spaces
        for(int j=n-1; j>=i; j--){
            cout<<" ";
        }
        // for stars
        /*method-1
        int stars=(2*i)-1;
        for(int j=1; j<=stars; j++){
             cout<<"*";
        }cout<<endl;*/
        // method-2
        for(int j=1; j<=i; j++){// first half
            cout<<"*";
        }
        for(int j=1; j<=i-1; j++){// second half
            cout<<"*";
        }
        cout<<endl;

     }

}