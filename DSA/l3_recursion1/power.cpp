#include<iostream>
using namespace std;

int power(int x, int n) {
    if(n==0){
        return 1;
    } else if(n==1){
        return x;
    }
    int ans=x*power(x,n-1);
    return ans;
}


int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}

