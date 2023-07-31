// later on its not working right now

#include <iostream>
using namespace std;
int main()
{
    char input;
    int countOfChar = 0, countOfDigits = 0, countOfSpaces = 0;
    cin>>input;
    while (input!='$'){
        cin>> input;

         if('a'<=input<='z'){
              countOfChar++;
          }else if(0<=input<=9){
              countOfDigits++;
          }else if (input==' ' || input=='\n' || input=='\t'){
              countOfSpaces++;
          }
    }
       /*if (97 >= input && input <= 122){
            countOfChar++;
        }
        else if (48 >= input && input <=  57){
            countOfDigits++;
        }
        else if (input == 32 || input == 10 || input == 9){
            countOfSpaces++;
        }
    }*/

    cout <<countOfChar<< " " <<countOfDigits<< " " <<countOfSpaces<< endl;
    return 0;
}