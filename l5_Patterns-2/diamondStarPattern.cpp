/*{ for n=5 }
  *
 ***
*****
 ***
  *
 */
#include <iostream>
using namespace std;

int main()
{
    int n;// n is always odd
    cin >> n;
// UPPER HALF OF DIAMOND 
    for (int i = 1; i <= (n/2)+1; i++)
    {
        // method-1
        for(int j=1; j<=(n/2)-i+1; j++){
            cout<<" ";
        }
        int stars=2*i-1;
        for(int i=1; i<=stars; i++){
            cout<<"*";
        }
        cout<<endl;
    }
// LOWER HALF OF DIAMOND
    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        int stars=n-(2*i);
        for(int j=stars; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }

}

  
  
  
 


