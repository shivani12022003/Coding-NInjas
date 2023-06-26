#include <string.h>

bool helper(char input [], int s, int e){
    if (s==e){
        return true;
    }
    if (input[s]!=input[e]){
        return false;
    }
    if(s<e+1){
    bool a= helper(input, s+1, e-1);
    if(a==false){
        return false;
    }
    }
    return true;
}

bool checkPalindrome(char input[]) {
     int n=strlen(input);
    
  return helper(input, 0, n-1);

}