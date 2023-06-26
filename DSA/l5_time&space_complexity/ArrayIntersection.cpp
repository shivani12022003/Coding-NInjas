#include <iostream>
#include <algorithm>
using namespace std;

int Partition(int input[], int si, int ei){
    int count=0;
    for(int i=si+1; i<=ei; i++){
        if(input[i] < input[si]){    
            count++;
        }
    }
    int pi = count+si;
    int temp=input[pi];
    input[pi]=input[si];
    input[si]=temp;
    
    int i=si, j=ei;
    while(i < pi && j > pi){
        if(input[i] < input[pi]){
            i++;
        }
        else if(input[j] >= input[pi]){
            j--;
        }
        else{                       //if(input[i] > input[pi] && input[j] < input[pi])
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++;
            j--;
        }
    }
    return pi;
}

void helper(int input[], int si, int ei)
{
    if(si >= ei){
        return;
    }
    
    int pi = Partition(input, si, ei);   
    
    helper(input, si, pi-1);
    helper(input, pi+1, ei);    
}	
void quickSort(int input[], int size)
{
    helper(input, 0, size-1);
}
void intersection(int *arr1, int *arr2, int n, int m) 
{
    // sort both array
    quickSort(arr1, n);
    quickSort(arr2, m);
     for(int i=0 ; i<n; i++){
        for(int j =0; j<m; j++){
           if (arr1[i]==arr2[j]){
                 cout<<arr2[j]<<" ";
                 arr2[j]=arr1[i]=-1;
				 break;
           }
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
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