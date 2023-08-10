#include <iostream>
#include <algorithm>
using namespace std;
// { COUNT NO. OF EITHER 0s OR 1s THEN FILL LEFT ARRAY WITH OTHER NUMBER}
void sortZeroesAndOne(int *input, int size){
    int count=0;  
    for (int i = 0; i < size; i++) { 
        if (input[i] == 0) 
            count++; 
    } 
      for (int i = 0; i < count; i++) 
        input[i] = 0;  
    for (int i = count; i < size; i++) 
        input[i] = 1; 
}
// { CHECK EACH NUMBER AND KEEP SWAPPING}
void sortZeroesAndOne(int *input, int size){
	int start=0, end=size-1;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp=input[start];
			input[start++]=input[i];
			input[i]=temp;
		}
	}
}
/*{ BY USING HASHMAPS }
void sortZeroesAndOne(int *input, int size){
     unordered_map sorting01
}*/
int main(){
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}
		sortZeroesAndOne(input, size);
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		cout << endl;
		delete[] input;
	}
	return 0;
}