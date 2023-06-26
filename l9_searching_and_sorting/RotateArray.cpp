#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{int i, temp=input[0];
    for(int i=0; i<n-d; i++){
		 input[i]=input[i+1];
	     input[i]=temp;
    }
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