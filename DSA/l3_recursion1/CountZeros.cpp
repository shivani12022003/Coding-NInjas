#include <iostream>
using namespace std;

int countZeros(int n) {
    if(n<9){
     if(n==0){
        return 1;
    }
     else 
        return 0;
    }
    else{
        int d=n%10;
        if(d==0){
            return countZeros(n/10)+1;
        }
        else 
            return countZeros(n/10);
    }
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
