#include <iostream>
using namespace std;
// { USING RECURSION }
void swapAlternate(int *arr, int size){
	if (size<=1){
		return;
	}
	int temp=arr[0];
	arr[0]=arr[1];
	arr[1]=temp;
	swapAlternate(arr+2, size-2);
}
/*// { USING FOR LOOP }
void swapAlternate(int *arr, int size){
	for(int i=0; i<size-1;  i+=2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}*/

int main(){
	int t;
	cin >> t;
	while (t--){
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++){
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}