#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    // When string is empty, return
    if (input[0] == '\0')
        return;
 
    // if the adjacent characters are same
    if (input[0] == input[1]) {
        // Shift character by one to left
        int i = 0;
        while (input[i] != '\0') {
            input[i] = input[i + 1];
            i++;
        }
        // Check on Updated String S
        removeConsecutiveDuplicates(input);
    }
    // If the adjacent characters are not same
    // Check from S+1 string address
    removeConsecutiveDuplicates(input + 1);
}

// shorter 
void removeConsecutiveDuplicates(char input[]) {
  // When string is empty, return
  if (input[0] == '\0')
    return;

if(input[0]==input[1]){
  for(int i=0; input[i]!='\0'; i++){
    input[i]=input[i+1];
  }
  removeConsecutiveDuplicates(input);
}
removeConsecutiveDuplicates(input+1);
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}


