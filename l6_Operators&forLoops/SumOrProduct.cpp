#include<iostream>
using namespace std;
/* { BY RECURSION }// still working on this
int sumFunc(int N){
    if(N==0){
        return 0;
    }
    return sumFunc(N-1)+sumFunc(N-2);
}

int productFunc(int N){
    
    if(N==1){
        return 1;
    }
    return productFunc(N-1)*productFunc(N-2);
}
*/
int main(){
    int N, choice;
    cin>>N>>choice;
    int sum=0, product=1;
    if(choice==1){
        for(int i=0; i<=N; i++){
            sum+=i;
        }
        cout<<sum<<endl;
        //cout<<sumFunc(N); // for recursion function
    }else if (choice==2){
        for(int i=1; i<=N; i++){
            product*=i;
        }
        cout<<product<<endl;
        //cout<<productFunc(N); // for recursion function
    }else{
        cout<<"-1";
    }

}