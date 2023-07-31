#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int toPrint=3*i+2;
        if(toPrint%4==0){
            n++;
            continue;
        }
        else{
            cout<<toPrint<<" ";
        }
    }
}