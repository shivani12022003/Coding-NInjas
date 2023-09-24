#include <iostream>
#include <cstring>
using namespace std;


// { USING LOOP}
bool checkPalindrome(char str[]) {
    int n=strlen(str)-1;
   for(int i=0;i<=n/2;i++){
       if(str[i] != str[n-i]){
           return false;
       }
   }
       return true;
}

//{ BY CHECKING FIRST AND LAST ELEMENT THROUGH LOOP}
bool checkPalindrome(char str[]){
    int start = 0;
    int end = strlen(str) - 1;
    while (start <= end){
        if (str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// { USING RECURSION }
bool checkPalin(char str[], int start, int end){
    if(start>=end){
        return true;
    }
    if(str[start]!=str[end]){ // check if it is not same 
        return false;
    }else{
    return checkPalin(str,start+1,end-1);
    }  

    /*  if(str[start]==str[end]){ // or check if it is same
        checkPalin(str,start+1,end-1);
    }else{
        return false;
    }
    */

}
bool checkPalindrome(char str[]){
    int start=0,end=strlen(str)-1;
    bool ans= checkPalin(str,start,end);
    return ans;
}

int main(){
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}