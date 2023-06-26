#include <iostream>
#include <cstring>
using namespace std;

int reverseStringWordWise(char input[]) {
    int begin,end,i,j=0,len,temp,count=0;
    //To find the length of string
        len=strlen(input);
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

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout<<input<<endl;
}
