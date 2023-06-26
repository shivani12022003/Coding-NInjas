#include <iostream>
#include<cstring>
using namespace std;

void pairStarHelper(char str[], int start) {
	if (str[start]=='\0' || str[start + 1]=='\0') {
        return;
    }  
    pairStarHelper(str, start + 1);
    if (str[start] == str[start + 1]) {
        int length = 0;
            while(str[length] !='\0'){
                length++;
            }
        for (int i = length; i >= start + 1; i--) {
            str[i + 1] = str[i];
        }
 
        str[start + 1] = '*';
    }
}

void pairStar(char input[]) {
	pairStarHelper(input, 0);
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
/*ANSWER:
#include <iostream>
using namespace std;

//Function To find length
int length(char arr[]){
	int len = 0;
	for(int i =0;arr[i]!='\0';i++){
		len++;
	}
	return len;
}

//Recursive Function
void pairStar(char arr[],int start){
	//Base Case: Reached End Of String
	if(arr[start]=='\0'){
		return;
	}   
	//Recursive Call 
	pairStar(arr,start+1);
	if(arr[start] == arr[start+1]){
		int l = length(arr);
		//Extending the string
		arr[l+1] = '\0';
		int i;
		//To shift the letters by 1
		for(i = l-1;i>=start +1;i--){
			arr[i+1] = arr [i];
		}
		//Entering * in between
		arr[start+1] = '*';
	}
}

//Main
int main(){
	char input[50];
	cout<<"Enter Input"<<endl;
	cin>> input;

	pairStar(input,0);  //Calling the function

	cout<<"Modified Output"<<endl;
	cout<<input<<endl;

	return 0;
}
*/


/*ANSWER2:


#include <iostream>
using namespace std;

void pairStarHelper(char str[], int start) {
	if (str[start] == '' || str[start + 1] == '') {
        return;
    }
    
    pairStarHelper(str, start + 1);
 
    if (str[start] == str[start + 1]) {
        int length = 0;
            while(str[length] != ''){
                length++;
            }
        for (int i = length; i >= start + 1; i--) {
            str[i + 1] = str[i];
        }
 
        str[start + 1] = '*';
    }
}

void pairStar(char input[]) {
	pairStarHelper(input, 0);
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
*/