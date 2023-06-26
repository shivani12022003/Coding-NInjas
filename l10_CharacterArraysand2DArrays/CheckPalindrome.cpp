#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    int start =0; 
    int end=strlen(str)-1;
    while(start<=end){
        if(str[start]==str[end]){
            return true;
            start++;
            end--;
        }
        return false;
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}