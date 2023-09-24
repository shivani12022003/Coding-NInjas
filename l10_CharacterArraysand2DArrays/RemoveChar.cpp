#include <iostream>
#include <cstring>
using namespace std;
//{ USING RECURSION }
void removeAllOccurrencesOfChar(char input[], char c) {
    if(input[0]==c){
        for(int i=0; i!='\0'; i++){
            input[i]=input[i+1];
        }
        removeAllOccurrencesOfChar(input,c);
    }else{
        removeAllOccurrencesOfChar(input+1,c);
    }
}

void removeAllOccurrencesOfChar(char input[], char c) {
    int j, n = strlen(input);
    for (int i = j = 0; i < n; i++)
        if (input[i] != c)
            input[j++] = input[i];
 
    input[j] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}