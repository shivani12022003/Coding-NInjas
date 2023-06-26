#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
   // from the end of the array
    if (size==0){
        return false;
    } 
     else{
        if(input[size]==x){
            return true;
        }else{
            checkNumber(input, size-1, x);
        }
    }
}
// from start of the array
/*
if(size==0){
    return -1;
}
else{
    if(input[0]==x){
        return true;
    }else{
        checkNumber(input+1, size-1, x);
    }
}  
*/

int main(){
    int n;
    cin >> n; 
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    } 
    int x;   
    cin >> x; 
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
