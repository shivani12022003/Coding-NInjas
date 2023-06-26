#include <iostream>
using namespace std;
bool validTriangle(int a, int b , int c){
    if(a+b<=c || b+c<=a || c+a<=b){
        return false;
    }else {
    return true;
}
}
int main(){
    int t;
    cout<<"Enter the number if traingles to be tested: "<<endl;
    cin>>t;

    while(t--){
    int a,b,c;
    cout<< "Enter three sides of triangle:"<<endl;
    cin>>a>>b>>c;
    if(validTriangle(a,b,c)){
        cout<<"Yes valid triangle "<<endl;
    }else{
        cout<<"No not a valid triangle"<<endl;
    }
 }
}