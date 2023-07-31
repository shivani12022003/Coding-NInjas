#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long bn=0, rem, i=1;

    while(n>0){
        rem=n%2;
        bn=bn+rem*i;
        n=n/2;
        i=i*10;
    }
    cout<<bn<<endl;
    return 0;
}