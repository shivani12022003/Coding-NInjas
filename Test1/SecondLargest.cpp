#include<iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num,max=INT_MIN,sec_max=INT_MIN;
    while(n>0){
        cin>>num;
        if(num>max){
            sec_max=max;
            max=num;
        }else if (num<max && sec_max<num){
             sec_max=num;
        }
        n--;
    }
    cout<<sec_max;

}
