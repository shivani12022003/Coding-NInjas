#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n){
   int lo = 0, hi = n - 1, mid = 0;
    while (mid <= hi) {
        switch (arr[mid]) {
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;
         case 1:
            mid++;
            break;
         case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}
// { BY COUNTING EACH NUMBER AND RUN THE LOOP TO PRINT }
void sort012(int *arr, int n){
	int num0=0, num1=0, num2=0;
	for(int i=0; i<n; i++){
		if(arr[i]==0){
			num0++;
		}else if(arr[i]==1){
			num1++;
		}else{
			num2++;
		}
	}
	int j=0,k=0;
	while(j<num0){
		arr[k++]=0;
		j++;
	}
	j=0;
	while(j<num1){
		arr[k++]=1;
		j++;
	}
	j=0;
	while(j<num2){
		arr[k++]=2;
		j++;
	}
}
// { BY USING SORT FUNCTION }
#include<algorithm>
void sort012(int *arr, int n){
	sort(arr,arr+n);
}
int main()
{
	int t;
	cin >> t;
	while (t--){
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++){
			cin >> arr[i];
		}
		sort012(arr, size);
		for (int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
		delete[] arr;
		cout << endl;
	}
	return 0;
}