#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int x , n;
    cin>>x>>n;
    // through loop
    int ans=1;
    for(int i=1; i<=n; i++){
        ans*=x;
    }
    // using power function 
    cout<<pow(x,n)<<endl;// few cases failing
    cout<<ans;
}