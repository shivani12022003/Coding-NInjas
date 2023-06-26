#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n){
    int totalsum=0;
	int actualsum=((n-1)*(n-2))/2;
	for(int i=0 ; i<n; i++ ){
		totalsum+=arr[i];
	}
	return totalsum-actualsum;
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
		cout << findDuplicate(input, size) << endl;
	}
	return 0;
}
/*NOT sure
for(int i=0; i<n; i++){
        arr[i]=i;
    }
    int ans=findDuplicate(arr+1,n-1);
    return ans;
	*/