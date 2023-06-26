#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    int Row = 0;
    for(int i = 0; i < nRows; i++)
    {
        int sum = 0;
        for(int j = 0; j < mCols; j++)
            sum = sum + input[i][j];
        if(Row < sum)
            Row = sum;
    }
    int Column = 0;
    for(int i = 0; i < mCols; i++)
    {
        int sum = 0;
        for(int j = 0; j < nRows; j++)
            sum = sum + input[j][i];
        if(Column < sum)
            Column = sum;
    }
	if(Row>Column){
		
	}
    //cout<<max(Row,Column);
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