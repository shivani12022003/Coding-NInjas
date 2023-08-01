/* for n=5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        // first half
        for (int j=1; j<=n; j++){
            if (1<=j && j<=(n-i+1)) {
                cout << j;
            }
            else {
                cout << "*";
            }
        }
        // second half
        int k = n-i+1;
        for (int j=2*n; j>=n+1; j--) {
            if (n+1<=j && j<=(2*n)-i + 1) {
                cout << k;
                k--;
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
}