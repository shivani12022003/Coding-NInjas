#include <iostream>
#include <string.h>
using namespace std;
/*
void printSubstrings(char input[]) {
     int n=strlen(input);
    for (int len = 1; len <= n; len++) {   
        for (int i = 0; i <= n - len; i++){ 
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                cout << input[k];
             
            cout << endl;
        }
    }
}*/

  // using loops
void printSubstrings(char input[]) {
  int n = strlen(input);
 for(int i=0; i<n; i++){
     for(int j=i; j<n; j++){
             for(int k=i; k<=j; k++){
                 cout<<input[k];
             }cout<<endl;
     }
 }
}

// using substr function
#include <string.h>
void printSubstrings(char input[]) {
  // using substr function 
 int n=input.length();
for(int i=0; i<n; i++){
  for(int j=1; j<=n-i; j++){
    cout<<input.substr(i,j)<<endl;
  }
}
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}