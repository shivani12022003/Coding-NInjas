#include <iostream>
#include <cstring>
using namespace std;
// { BY USING LOOP }
void replaceCharacter(char input[], char c1, char c2) {
    int n=strlen(input);
    for(int i=0; i<n; i++){
        if(input[i]==c1){
            input[i]=c2;
        }
    }
}

// { RECURSIVE METHOD }
void replaceCharacter(char input[], char c1, char c2) {
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]==c1){
        input[0]=c2;
    }
    replaceCharacter(input+1,c1,c2);
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}