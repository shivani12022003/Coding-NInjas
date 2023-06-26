/*{ PATTERN-2 }
   1
  23
 345
4567
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     
     for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1 ;j<=n-i;j++){
           cout<<" ";
        }
        // for numbers(by initializing another int variable k)
        int k=i;
        for(int j=n-i+1; j<=n; j++){
            cout<<k;k++;
        }cout<<endl;

     }
    }
    
    /*for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // for numbers
        
        for (int j=n-i+1; j<=n; j++){
            cout<<i+(n-j);
        }
        cout<<endl;
/*{ANOTHER PATTERN MADE IN THE PROCESS }
   1
  32
 543
7654
*/