/*
   1
  12
 123
1234
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        // for numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}