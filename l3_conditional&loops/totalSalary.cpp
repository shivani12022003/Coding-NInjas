#include<iostream>
#include<cmath>  
using namespace std;

int main(){
    int bs;
    char grade;
    cin>>bs>>grade;
    double allow;
    double hra=0.2*bs;
    double da=0.5*bs;
    double pf=0.11*bs;

    if(grade=='A'){
        allow=1700;
    }else if(grade=='B'){
        allow=1500;
    }else {
        allow=1300;
    }
    int totalSalary =round( bs + hra + da + allow -pf);
    cout<<totalSalary;

}