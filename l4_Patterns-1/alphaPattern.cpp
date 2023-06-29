/*{for n=3 }
 A
 BB
 CCC
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';// or char ch=65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch;
        }cout<<endl;
         ch++;// to increase the char(ascii value ) 
    }
}