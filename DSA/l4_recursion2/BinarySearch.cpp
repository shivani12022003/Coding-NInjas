#include <iostream>
using namespace std;

int binarySearch(int input[], int size, int element) {
    

}


int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
/*ANSWER
#include<cstring>
bool checkAB(char input[]) {
	int n = strlen(input);
    int i;
    for (i = 0; i < n; i++)
        if (input[i] != 'a')
            break;
    if (i * 2 != n)
        return false;
    int j;
    for (j = i; j < n; j++)
        if (input[j] != 'b')
            return false;
 
    return true;

}
*/

