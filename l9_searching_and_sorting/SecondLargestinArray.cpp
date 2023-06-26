#include <iostream>
#include<climits>
using namespace std;

int findSecondLargest(int *input, int n)
{   
    if(n<=0)
        return INT_MIN; 
    int maxx=input[0];
    int secmax=INT_MIN;
    
    for(int i=1;i<n;i++){
			if(input[i]>maxx){
            secmax=maxx;
            maxx=input[i];
        }	
        
        else if(input[i]>secmax && input[i] != maxx)
            secmax=input[i];
    }
    
    return secmax;
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
		cout <<findSecondLargest(input, size) << endl;
		delete[] input;
	}
	return 0;
}