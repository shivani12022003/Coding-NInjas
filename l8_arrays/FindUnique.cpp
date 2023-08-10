#include <iostream>
#include <algorithm>
using namespace std;

/*// { BY USING FOR LOOPS: }
int findUnique(int *arr, int size){
	for (int i=0; i<size; i++){
		int j;
		for (j=0; j<size; j++){
			if (i!=j && arr[i]==arr[j]){
				break;
			}
		}
		if (j == size){
			return arr[i];
		}
	}
}*/

/*// { BY SORTING : (not working rn)}
int findUnique(int *arr, int size){
	sort(arr, arr+size);
	for(int i=0 ;i<size-1; i+=2){
        if(arr[i]!=arr[i+1]){
			return arr[i];
		}
	}
}*/

/*{ USING XOR:
1. XOR of a number with itself is 0.
2. XOR of a number with 0 is number itself. }*/
int findUnique(int *arr, int size){
	int num;
	for (int i=0; i<size; i++){
		num^= arr[i];
	}
	return num;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; ++i){
			cin >> input[i];
		}
		cout << findUnique(input, size) << endl;
	}
	return 0;
}