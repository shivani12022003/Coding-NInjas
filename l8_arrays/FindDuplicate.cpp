#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
   int ans;
    for (int currentNumber = 1; currentNumber <= size - 1; currentNumber++) {
        int count = 0;
        for (int index = 0; index < size; index++)  {
            if (arr[index] == currentNumber) {
                count++;
            }
        }
        if (count > 1)  {
            ans = currentNumber;
        }
    }
    return ans;
}
int main()
{
	int t;
	cin >> t;	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cout << duplicateNumber(input, size) << endl;
	}
	return 0;
}