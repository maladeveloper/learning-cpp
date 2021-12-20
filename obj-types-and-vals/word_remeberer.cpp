#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    cout << "Press q to exit.";
    cout << "Enter word:"; 
    string prev_word = ""; 
    string curr_word; 
    while (cin >> curr_word){
        if (curr_word == "q"){break;}
        if (prev_word==curr_word){cout<< "\nRepeated word: " << curr_word;}
        prev_word = curr_word;
        cout << "\nEnter Word:";
    }
}
