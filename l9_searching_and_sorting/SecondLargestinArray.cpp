#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
// { BY TRAVERSING FROM START OF THE ARRAY}
int findSecondLargest(int *input, int n){
	if (n <= 0)
		return INT_MIN;
	int maxx = input[0];
	int secmax = INT_MIN;

	for (int i = 1; i < n; i++){
		if (input[i] > maxx){
			secmax = maxx;
			maxx = input[i];
		}
		else if (input[i] > secmax && input[i] < maxx){
			secmax = input[i];
		}
	}

	return secmax;
}
//{ BY USING SORT FUNCTION }
int findSecondLargest(int *input, int n){
	sort(input, input + n);
	int secmax = INT_MIN, int i;
	for (i = n - 1; i >= 0; i++){
		if (input[i] != input[i - 1]){
			secmax = input[i - 1];
		}
	}
	if (i < 0){
		return -1;
	}
	return secmax;
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
		cout << findSecondLargest(input, size) << endl;
		delete[] input;
	}
	return 0;
}