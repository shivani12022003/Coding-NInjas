#include <iostream>
using namespace std;

// using loops 
void findLargest(int **input, int nRows, int mCols) {
  int max_index_col=0, max_index_row=0;
  int max_col = -2147483648;
  for (int i = 0; i < mCols; i++) {
    int sum_c = 0;
    for (int j = 0; j < nRows; j++) {
      sum_c += input[j][i];
      }
      if (sum_c > max_col) {
        max_index_col = i;
        max_col = sum_c;       
    }  
  }
  int max_row = -2147483648;
  for (int i = 0; i < nRows; i++) {
    int sum_r = 0;
    for (int j = 0; j < mCols; j++) {
      sum_r += input[i][j];
     
    } if (sum_r >max_row) {     
        max_row = sum_r;
        max_index_row = i;
      }
    
  }
  if (max_row < max_col) {
    cout << "column "<< max_index_col << " " << max_col;
  } else if (max_row> max_col) {
    cout << "row " << max_index_row << " " << max_row;
  } else if (max_row == max_col) {
    cout << "row "<< 0 << " " << max_row;
  }
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}