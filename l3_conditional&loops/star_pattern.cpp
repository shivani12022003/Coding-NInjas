/*{ STAR PATTERN }
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
        // print spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // print stars
        for(int j=n-i+1; j<=n+(i-1); j++){
            cout<<"*";

        }cout<<endl;
    }
}