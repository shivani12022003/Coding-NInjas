#include <iostream>
#include <cstring>
using namespace std;
// { USING LOOPS }
void trimSpaces(char input[]) {
   int count = 0;
    for (int i = 0; input[i]; i++)
        if (input[i] != ' ')
            input[count++] = input[i];                                  
    input[count] = '\0';
}

/*{ RECURSION : cant work here as it would need extra string }
void trimSpaces(char input[]) {
    string ans;
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]!=' '){
        ans+=input[0];
        trimSpaces(input+2);
    }
    trimSpaces(input+1);
}*/
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}