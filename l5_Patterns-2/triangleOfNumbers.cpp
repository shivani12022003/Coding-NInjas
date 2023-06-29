/*{ for n=4 }
   1   // 4
  232  // 5
 34543 // 6
4567654
*/
#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int k=i;
        for(int j=1; j<=n+i-1; j++){ 
            if(j<=n-i){
                cout<<" ";
            }
            else if (j<=2*i-1) {
                cout<<k;
                k++;
            }else if (j<=n+i-1) {
                cout<<k;
                k--;
            }
            
        }
        cout<<endl;
        }





      /*  int k=i;
        for(int j=1; j<=2*i-1;j++){// first half(numbers starting form i and decreasing)
            cout<<k;
            k++;
        }
        for(int j=0; j<=i-1;j++){// second half(numbers ending at i)
            cout<<k-2;
       }cout<<endl;*/
 }