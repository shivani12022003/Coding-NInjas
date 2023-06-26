#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
	int num;
	for(int i=0 ;i<size; i++){
	    num^=arr[i];
	}
	return num;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin>>size;
		int *input = new int[size];
		for(int i = 0; i < size; ++i)
		{
			cin>>input[i];
		}
		cout <<findUnique(input, size) << endl;
	}
	return 0;
}