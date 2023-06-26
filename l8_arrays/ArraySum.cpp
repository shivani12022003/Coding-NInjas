#include<iostream>
using namespace std;
/*Given an array of length N, you need to
find and print the sum of all elements of the array.*/
int main(){
int n,sum=0; 
cout<<"Enter array size:";
cin>>n;
cout<<"Enter array elements:";
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0 ; i<n; i++){
    sum+=arr[i];
}
cout<<sum;
return 0;
}