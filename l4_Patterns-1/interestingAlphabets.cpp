/*{ for n=5 print:-
E
DE
CDE
BCDE
ABCDE
}*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch=65;
    for(int i=1; i<=n; i++){
        for(int j=n-i; j<n; j++){
            cout<<char(ch+j);
        }cout<<endl;
    }
}