#include<iostream>
using namespace std;


int main(){

    int row, col, sum=0;
    cin>>row>>col;
    int input[row][col];
    for(int i=0;i<row;i++){    //input of elements in array
       for(int j=0;j<col;j++)
        cin>>input[i][j];
    }
    //sum of each column
    for (int i=0; i<col; i++) {
        sum=0;
        for (int j=0; j<row; j++) {
            sum = sum + input[j][i];
        }
          cout<<sum<<" ";
    } 
}
