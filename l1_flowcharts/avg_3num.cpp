#include<iostream>
using namespace std;

double average(int n1, int n2, int n3){
    double avg;
    avg=(n1+n2+n3)/3;
    return avg;
}
int main(){
    int t;
    cout<<"Enter number of test cases:";
    cin>>t;
    while(t--){
      int n1,n2,n3;
      cout<<"Enter three numbers :";
      cin>>n1>>n2>>n3;
      cout<<average(n1,n2,n3)<<endl;
    }
    return 0;
}