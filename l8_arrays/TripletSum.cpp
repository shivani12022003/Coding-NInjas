#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int tripletSum(int *input, int size, int x)
{
   sort(input, input+size);
    int ans = 0;
    for (int i = 0; i < size - 2; i++)  {
      int j = i + 1, k = size - 1;
        while (j < k)
        {
            if (input[i] + input[j] + input[k] >= x)
                k--;
            else
            {
                ans += (k - j);
                j++;
            }
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
		int x;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;
		cout << tripletSum(input, size, x) << endl;
		delete[] input;
	}
	return 0;
}