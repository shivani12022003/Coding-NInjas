#include <iostream>
using namespace std;

int sumOfDigits(int n) {
   if(n==0){
      return 0;
   }
   int ld=n%10;
   int sum=ld+sumOfDigits(n/10);
   return sum;
}
 
int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
