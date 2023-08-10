#include <iostream>
using namespace std;

//{FOR LOOP}
void arrange(int *arr, int n) {
	int start=0, end=n-1;
	for(int i=1; i<=n; i++){
		if(i%2==0) {
			arr[end--]=i;
		}else{
			arr[start++]=i;
		}
	}
}
/* //{BY RECURSION}
void arrange(int *arr, int n){
	int start=0, end=n-1;
	if(n%2==0){
		arr[end--];
	}else{
		arr[start++];
	}
	arrange(arr, n-1);
}*/
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++){
			cout << arr[i] <<" ";
		}
		cout << endl;
		delete [] arr;
	}
}