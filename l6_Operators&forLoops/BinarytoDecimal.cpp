#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long bn;
    cin>>bn;
    int ans=0, rem, q, i=0;
    while(bn!=0){
        rem=bn%10;
        q=pow(2,i);
        ans=ans+rem*q;
        bn=bn/10;
        ++i;
    }
    cout<<ans<<endl;
return 0;

}