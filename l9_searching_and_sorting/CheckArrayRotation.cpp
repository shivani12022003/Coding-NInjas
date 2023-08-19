#include <iostream>
using namespace std;

// { TRAVERSE THE ARRAY AND STOP WHERE }
int arrayRotateCheck(int *input, int size){
	for (int i = 0; i < size; i++){
		if (input[i] > input[i + 1]){
			return i + 1;
			break;
		}
	}
	return 0;
}
// { COMPARING TO THE LAST ELEMENT OF ARRAY AS IT WILL BE LARGEST IN ARRAY}
int arrayRotateCheck(int *input, int size){
	int count=0;
	for(int i=0; i<size; i++){
		if(input[i]>input[size-1]){
			count++;
		}
	}
	return count;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	return 0;
}