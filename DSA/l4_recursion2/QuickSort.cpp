#include<iostream>
using namespace std;

void quickSort(int input[], int size) {
  if(size==0||size==1)
        return;
    
    int counter=0;
    for(int i=1;i<size;i++)
        if(input[i]<input[0])
            counter++;
    int temp=input[counter];
    input[counter]=input[0];
    input[0]=temp;
    
    int i=0,j=size-1;
    while(i<counter&&j>counter)
    {
    if(input[i]<input[counter])
        i++;
    else if(input[j]>=input[counter])
        j--;
    else{
        int temp1=input[i];
        input[i]=input[j];
        input[j]=temp1;
        i++;
        j--;
        }
    }
    quickSort(input,counter);
    quickSort(input+counter+1,size-1-counter);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}

/*******************************
 * think about base case
#include <iostream>
using namespace std;
void swap(int arr[], int i , int j){
    int temp= arr[i];
     arr[i]= arr[j];
     arr[j]=temp;
}
int partition (int arr[],int l, int r){
    int i=l-1;
    int pivot= arr[r];
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j );
        }
    }
     swap(arr, i+1, r);
    return i+1;
}
void quicksort(int arr[], int l, int r){
    if(l<r){
    int pi=partition(arr, l ,r);
    quicksort(arr,l, pi-1);
    quicksort(arr, pi+1,r);
    }
}
int main() {
     int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
// here three arguments are used ( change-creat another helping func.)
    quickSort(arr, 0, n-1);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;
}
*******************************************/
