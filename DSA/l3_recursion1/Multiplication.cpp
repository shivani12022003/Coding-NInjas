#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
    if(n==0 ){
        return 0;
    }
      int ans=m+multiplyNumbers(m,n-1);
      return ans;
      //OR return m +ans;

}

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
