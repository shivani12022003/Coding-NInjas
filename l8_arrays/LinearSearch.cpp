#include <iostream>
using namespace std;

int linearsearch(int *arr, int n, int x){
    for(int i=0 ; i<n; i++){
        if(arr[i]==x){
            return i;
        }  
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cout<<"Enter size of array:";
        cin>>n;
    /*When you declare the array in the following manner:
    => int array[5] = {};  
    The memory for the variable named array is allocated on the stack.
    When the function or the enclosing scope ends, the variable is destroyed and the memory is reclaimed.
    However, when you declare an array using the following syntax:
    => int *array = new int[5];  
    The memory for the variable is allocated on the heap. Now it becomes the programmer’s responsibility
    to delete that memory; if you fail to delete it, it becomes a memory leak.
    In case of the pointer based syntax, you can repeatedly delete and reallocate, as well; it allows you 
    to have variable length arrays using the same variable. */
        int *arr = new int[n]; 
        cout<<"Enter elements of array:";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<"Enter element to be searched:";
        cin>>x;
        cout<<linearsearch(arr, n, x);
    }
    return 0;
}