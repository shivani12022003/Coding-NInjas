/*( for n=4)
A
BC
CDE
DEFG
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ch=65;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(ch+j);
        }cout<<endl;
        ch++;

    }
}