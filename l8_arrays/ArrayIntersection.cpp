#include <iostream>
#include <algorithm>
using namespace std;
// { BY USING FOR LOOPS: O(size1 * size2 )}
void intersection(int *input1, int *input2, int size1, int size2){
	for (int i = 0; i < size1; i++){
		for (int j = 0; j < size2; j++){
			if (input1[i] == input2[j]){
				cout << input1[i] << " ";
				input1[i] = input2[j] = -1;
				break;
			}
		}
	}
}

/*{ BY SORTING BOTH ARRAYS THEN FINDING INTERSECTION : // answers are correct but order is changed in the answer
Time complexity : to sort both arrays           +   to find intersection
		=O(size1*log(size1) + size2*log(size2)) +   O(size1+size2)       }*/
void intersection(int *input1, int *input2, int size1, int size2){
	sort(input1, input1+size1);
	sort(input2, input2+size2);

	for(int i=0; i<size1; i++){
		int j=0;
        if(input1[i]==input2[j]){
			cout<<input1[i]<<" ";
			input1[i]=input2[j]=-1;
			break;
		}else if(input1[i]>input2[j]){
            j++;
		}else if(input1[i]<input2[j]){
			i++;
		}
	}
}
// { BY USING HASHMAPS: O(m+n) as searching and inserting operations in hashmaps are performed in O(1) time // later }

void inetrsection(int *input1, int size1, int *input2, int size2){

}
int main(){
	int t;
	cin >> t;
	while (t--){
		int size1, size2;
		cin >> size1;
		int *input1 = new int[size1];
		for (int i = 0; i < size1; i++){
			cin >> input1[i];
		}
		cin >> size2;
		int *input2 = new int[size2];
		for (int i = 0; i < size2; i++){
			cin >> input2[i];
		}
		intersection(input1, input2, size1, size2);	
		delete[] input1;
		delete[] input2;		
		cout << endl;
	}
	return 0;
}