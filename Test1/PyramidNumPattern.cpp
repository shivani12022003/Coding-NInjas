/*
   1
  212
 32123
4321234

*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        // first half: number starts from row no. to dec. till 1
        int spaces = n - i; // spaces in each row
        for (int j = 1; j <= spaces; j++){
            cout << " ";
        }
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        // second half: number starts from  to dec. till row no.
        for (int j = 2; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}

