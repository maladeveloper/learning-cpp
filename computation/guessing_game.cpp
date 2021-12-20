#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
Write a program to play a numbers guessing game. The user thinks of a
number between 1 and 100 and your program asks questions to figure
out what the number is (e.g., "Is the number you are thinking of less
than 50?"). Your program should be able to identify the number after
asking no more than seven questions. Hint: Use the < and <= operators
and the if-else construct.
*/

int main(){

    cout << "Think of a number between 0 and 100."; 
    int lrg = 100; int smll = 0;  char smaller;
    int final_num = -1;

    int num = (lrg + smll) / 2;

    while(true){
        if((lrg - smll) == 1){ final_num = num; break;}
        cout << "Is your number smaller than " << num << " ?(y/n)";
        cin >> smaller; 
        if (smaller == 'y'){ lrg = num;} else { smll = num; }
        num = (lrg + smll) / 2;
    }
    cout << "Is your chosen number: " << final_num << endl;
}