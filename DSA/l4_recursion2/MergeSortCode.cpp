#include <iostream>
using namespace std;

void merge(int *part1, int size1, int *part2, int size2, int*output, int n)
{
  int i=0,j=0,k=0;
    while(i<size1&&j<size2){
        if(part1[i]<part2[j]){
            output[k++]=part1[i++];
        }
        else{
        output[k++]=part2[j++];
        }
    }
    while(j<size2){
        output[k++]=part2[j++];
    }
    while(i<size1){
        output[k++]=part1[i++];
    }
}
void mergeSort(int arr[], int size)
{
	if(size==1){
		return;
	}
    int *part1=new int [size/2];
    int size1=size/2;
    int *part2=new int [size-size/2];
    int size2=size-size/2;
    for(int i=0; i<size1; i++){
        part1[i]=arr[i];
    }
    int k=0;
    for(int i=size1; i<size; i++){
        part2[k++]=arr[i];
    }
    mergeSort(part1, size1);
    mergeSort(part2, size2);
    merge(part1, size1, part2, size2, arr, size);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
  return 0;
}

//similar appraoach but different code
/*
#include <iostream>
using namespace std;

   void merge(int arr[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    // temp arrays
    int a[n1];
    int b[n2];
    
    for(int i=0; i<n1; i++){
        a[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++){
       b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
     arr[k]=b[j];
       k++;j++;
}
}

void mergesort(int arr[], int l, int r){
   if(l<r){
    int mid=(l+r)/2;
    mergesort(arr , l, mid);
    mergesort(arr , mid+1, r);
    
    merge(arr, l , mid, r);
   }
}
int main()
{
    //merge sort
   int n;
   cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
     cin>>arr[i];
    }
     mergesort(arr, 0, n);
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     return 0;
}
*/