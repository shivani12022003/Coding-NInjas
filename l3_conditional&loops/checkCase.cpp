#include<iostream>
using namespace std;

int main(){
    char anyChar;
    cout<<"Enter any char"<<endl;
    
    cin>>anyChar;
      // by charName
      if(anyChar>='A' && anyChar<='Z'){
         cout<<"1"<<endl;
      }else if('a'<=anyChar && anyChar<='z'){
         cout<<"0"<<endl;
      }else{
         cout<<"-1"<<endl;
      }

      /* by ASCII code of char
      int b=anyChar;
      if(65<=b<=90){
         cout<<"1"<<endl;
      }else if(97<=b<=122){
         cout<<"0"<<endl;
      }else{
         cout<<"-1"<<endl;
      }*/
}