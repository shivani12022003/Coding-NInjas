    /*{ PATTERN-1 }
      1111
      2222
      3333
      4444
    */
    /*{ PATTERN-2 }
      1234
      1234
      1234
      1234
    */
    /*{ PATTERN-3 }
      4321
      4321
      4321
      4321
    */
# include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    cout<<" PATTERN-1 "<<endl;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i;
        }cout<<endl;
     }

     cout<<" PATTERN-2 "<<endl;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }cout<<endl;
     }

     cout<<" PATTERN-3 "<<endl;
     for(int i=1; i<=n; i++){
        for(int j=n; j>0; j--){
           cout<<j;
        }cout<<endl;
     }

}