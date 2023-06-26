#include<iostream>
using namespace std;
 

 int main(){
    int s, e, w;
    cout<<"starting value of fahrenheit, ending value of fahrenheit and steps of jumps: "<<endl;
    cin>>s>>e>>w;
    
    while(s<=e){
        // conversion from fahrenheit  to celcius 
        double cel=(s-32)*5/9;
        cout<<s<<"\t"<<cel<<endl;
        s+=w;
    }
 }
