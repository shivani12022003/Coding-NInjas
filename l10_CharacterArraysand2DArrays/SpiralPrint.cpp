#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols) {
  int s_row = 0, e_row = nRows - 1, s_col = 0, e_col = nCols - 1, count = 0;
  int totalElements = nRows * nCols;
  while (count < totalElements) {
    // for starting row
    for (int j = s_col; j <= e_col && count<totalElements ; j++) {
      cout << input[s_row][j] << " ";
      count++;
    }s_row++;

    // for ending column
    for (int i = s_row; i <= e_row && count<totalElements; i++) {
      cout << input[i][e_col] << " ";
      count++;
    } e_col--;
    // for ending row
    for (int j = e_col; j >= s_col && count<totalElements; j--) {
      cout << input[e_row][j] << " ";
      count++;
    } e_row--;
    // for starting column
    for (int i = e_row; i >= s_row && count<totalElements; i--) {
      cout << input[i][s_col] << " ";
      count++;
    } s_col++;
  }
}



int main(){
    int t;
    cin >> t;
    while (t--){
        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];
        for (int i = 0; i < row; i++) {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++){
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);
        for (int i = 0; i < row; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
        cout << endl;
    }
}