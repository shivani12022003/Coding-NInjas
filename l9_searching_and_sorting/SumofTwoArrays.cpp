#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
	int s3=max(size1,size2);
   int sum=0,carry=0,s=0;
   for(int i=size1; i>=0; i--){
	   for(int j=size2; j>=0; j--){
            sum=input1[i]+input2[j]+carry;
			s=sum%10;
			carry=sum/10;
			for(int k=s3; k>=0; k--){
		output[k]=s;
	   }
	}
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