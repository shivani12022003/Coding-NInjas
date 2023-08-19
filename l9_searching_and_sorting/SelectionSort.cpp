#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int *input, int size)
{
    // find min then swap with ith element
    for (int i = 0; i < size - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < size; j++){
            if (input[j] < input[minIndex]){
                minIndex = j; // min found now replace with ith
            }
        }
        // swapping { swap(input[i],input[minIndex])}
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex] = temp;
    }
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
        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }
        selectionSort(input, size);
        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }
        delete[] input;
        cout << endl;
    }
}