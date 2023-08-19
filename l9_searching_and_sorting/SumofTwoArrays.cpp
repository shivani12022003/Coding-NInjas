#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output){
	int n=max(size1,size2)+1;
	int i=size1-1,j=size2-1,carry=0,k=n-1;

	while(i>=0 && j>=0){
		int tempans=carry+input1[i]+input2[j];
		int rem=tempans%10;
		carry=tempans/10;
		output[k]=rem;
		k--;
		i--;
		j--;
	}
	output[0]=carry;

while(i>=0){ // when input2 ended first
	output[k]=input1[i];
	k--;i--;
}
while(j>=0){ // when input2 ended first
	output[k]=input2[j];
	k--;j--;
}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int size1;
		cin >> size1;
		int *input1 = new int[size1];
		for (int i = 0; i < size1; ++i){
			cin >> input1[i];
		}
		int size2;
		cin >> size2;
		int *input2 = new int[size2];
		for (int i = 0; i < size2; ++i){
			cin >> input2[i];
		}
		int outsize = 1 + max(size1, size2);
		int *output = new int[outsize];
		sumOfTwoArrays(input1, size1, input2, size2, output);
		for (int i = 0; i < outsize; ++i){
			cout << output[i] << " ";
		}
		delete[] input1;
		delete[] input2;
		delete[] output;
		cout<<endl;
	}
	return 0;
}