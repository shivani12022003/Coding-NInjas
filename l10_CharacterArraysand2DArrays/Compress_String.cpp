#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    int n = input.size();
    string compressString = "";
    int localCount = 0;
    char currentCharacter;
    int i = 0;
    int j = 0;
    for (i = 0; i < n; ++i){
        currentCharacter = input[i];
        localCount = 0;
        for (j = i; j < n; ++j)
        {
            if(currentCharacter == input[j])
                localCount++;
            else 
                break;
        }

        if(localCount == 1)
        {
            compressString = compressString + currentCharacter;
        }
        else
        {
            compressString = compressString + currentCharacter + to_string(localCount);
        }
        i = j - 1;
    } 
    return compressString;   
}

int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}