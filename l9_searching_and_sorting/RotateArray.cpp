#include <iostream>
using namespace std;
// { BY CREATING TEMP ARRAY TO STORE ELEMENTS }
void rotate(int *input, int d, int n){
	int temp[d];
	for(int i=0 ;i<d; i++){
		temp[i]=input[i];
	}
	for(int i=0; i<n-d; i++){
		input[i]=input[i+d];
	}
	for(int i=0; i<d; i++){
		input[n-d+i]=temp[i];
	}
}// => better way of using temporary array:
void rotate(int *input, int d, int n){
	int temp[n];
	int j=0;
	for(int i=d; i<n; i++){ // temp array filled with elements after index d
		temp[j]=input[i];
		j++;
	}
	for(int i=0; i<d; i++){ // temp array filled with elements before index d
		temp[j]=input[i];
		j++;
	}
    // in the temp array its arranged in the order after rotation, so place them in input array directly
	for(int i=0; i<n; i++){
		input[i]=temp[i];
	}
}

// { BY SWAPPING ELEMENTS }// not working 
void rotate(int *input, int d, int n){
	for(int i=0; i<d; i++){
		int temp=input[0];
		input[i]=input[i+1];
		input[n-1]=temp;
	}
	
}

// { USING REVERSE FUNCTION }
#include <algorithm>
void rotate(int *input, int d, int n){
	d=d%n;
	reverse(input,input+n);// reverse whole array 
	reverse(input,input+(n-d));
	reverse(input+(n-d),input+(n));
}
int main(){
	int t;
	cin >> t;	
	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i=0; i<size; ++i){
			cin >> input[i];
		}
		int d;
		cin >> d;
		rotate(input, d, size);
		for (int i = 0; i < size; ++i){
			cout<<input[i]<<" ";
		}
		delete[] input;
		cout << endl;
	}
	return 0;
}