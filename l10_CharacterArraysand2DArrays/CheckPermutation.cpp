#include <iostream>
#include <cstring>
using namespace std;

// { USING INBUILT FUNCTIONS : sort & compare}
#include <algorithm>
bool isPermutation(char input1[], char input2[]) {
  int len1=strlen(input1);
  int len2=strlen(input2);

  sort(input1,input1+len1);
  sort(input2,input2+len2);
  
  /*{ FOR STRING COMPARISON }
  	input1.compare(input2);
   if(input1==input2)*/

  if (strcmp(input1, input2) == 0){
    return true;
  }else{
    return false;
  }
}
// { USING SORT AND FOR LOOP}
#include <algorithm>
bool isPermutation(char input1[], char input2[]) {
    int n1=strlen(input1);
    int n2=strlen(input2);
    sort(input1,input1+n1);
    sort(input2,input2+n2);
    if(n1!=n2){
        return false;
    }else{
        for(int i=0,j=0; i<n1 ; i++,j++){
            if(input1[i]!=input2[j]){
                return false;
            }
        }
        return true;
    }
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}