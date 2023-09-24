#include <iostream>
#include <cstring>
using namespace std;

int reverseStringWordWise(char input[]) {
    int begin,end,i,j=0,len,temp,count=0;
       int len=strlen(input);//To find the length of string
    //To reverse whole string
        for(i=0;i<(len/2);i++){
        temp=input[i];
        input[i]=input[len-1-i];
        input[len-1-i]=temp;
        }
    //To reverse each word seperately
    for(i=0;i<len;i++){
        if(input[i]==' ' || input[i]=='\0'){
            for(begin=j,end=i-1 ; begin<(i+j)/2 ; begin++,end--){
                temp=input[begin];
                input[begin]=input[end];
                input[end]=temp;
            }
            j=i+1;
        }
    }
}

// shorter approach for the above code
#include <string.h>
void reverse(char input[], int start, int end) {
  while(start<end){
    std::swap(input[start++], input[end--]);
  }
}
void reverseStringWordWise(char input[]) {
  int n=strlen(input), start=-1, i;
  reverse(input, start+1, n-1);
  for( i=start; i<=n; i++){
    if(input[i]==' ' || input[i]=='\0'){
       reverse(input,start+1,i-1);
        start=i;
    }
  }
}

// { BY USING REVERSE FUNCTION }: not working here
void reverseStringWordWise(char input[]) {
    int n=strlen(input);
    reverse(input[0],input[n-1]);
    int start=0,end=0;
    while(input[end]!='\0'){
          if(input[end]==' '){
              reverse(input[start],input[end]);
              start=end+1;
          }
          end++;
    }
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout<<input<<endl;
}
