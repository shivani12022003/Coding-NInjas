#include <iostream>
using namespace std;
/*//{ BY USING FOR LOOPS: O(n²)}
int duplicateNumber(int *input, int size){
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
             if(input[i]==input[j]){
				return input[i];
		    }
		}
	}
	return -1;
}*/

// { USING XOR : O(n)}
int duplicateNumber(int *input, int size){
	int allXor=0, numXor=0;
	for(int i=0; i<size; i++){
		allXor=allXor^input[i];
	}
	for(int i=0;  i<=size-2; i++){
		numXor=numXor^i;
	}

	return numXor^allXor;
}
// { BY CALCULATING SUM :O(n)}
int duplicateNumber(int *input, int size){
	int arraySum=0, actualSum=0;
	for(int i=0; i<size; i++){
		arraySum+=input[i]; // sum of the array
	}
	actualSum=((size-2)*(size-1))/2; // sum n-2 natural numbers
	
	return (arraySum-actualSum);
}
int main(){
	int t;
	cin >> t;	
	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++){
			cin >> input[i];
		}
		cout << duplicateNumber(input, size) << endl;
	}
	return 0;
}