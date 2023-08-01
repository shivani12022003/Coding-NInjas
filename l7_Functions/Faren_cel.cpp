#include<iostream>
using namespace std;
void printTable(int start, int end, int steps){
    int cel;
    while(start<=end){
        // fahrenheit into celcius
        cel=((start-32)*5)/9;
        cout<<start<<"\t"<<cel<<endl;
        start+=steps;
    }    
}
int main(){
    int start, end, steps, cel;
    cin>>start>>end>>steps;
    printTable(start, end, steps);

    return 0;
}