/*{for n=4}
4444
333
22
1
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<n-i+1;
        }cout<<endl;
    }
}