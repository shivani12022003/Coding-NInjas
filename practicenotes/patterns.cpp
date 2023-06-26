# include<iostream>
using namespace std;
/* pattern 1
55555
45555
34555
23455
12345
*******/
void pattern1(int n){
    for (int i = 0; i<n; i++){
        for (int j=n; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
/********
pattern2
ABCDE
ABCD
ABC
AB
A 
*******/
void pattern2(int n){
    char ch='A';
    for (int i=0; i<=n; i++){
        for (int j=n; j>=j-i+1; j--){
           cout<<ch<<" ";
            ch++;
        }
       cout<<endl; 
    }   
}
/*pattern3
12344321
123**321
12****21
1******1
*********/
void pattern3(int n){
    
}
int main(){
    pattern1(5);
    return 0;
} 