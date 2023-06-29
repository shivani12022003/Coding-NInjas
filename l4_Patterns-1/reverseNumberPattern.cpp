/*
1
21
321
4321
*/
#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){// as j starts with i(row no.) and is always >=1 
            cout<<j;
        }cout<<endl;
    }

}