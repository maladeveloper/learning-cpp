#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int int_val = -1; 
    string int_str = " ";
    cout << "Enter name of number from 0-4:"; cin >> int_str; 
    //Conversion of string to number
    if(int_str == "Zero" || int_str == "zero"){ int_val = 0; }
    else if(int_str == "One" || int_str =="one"){int_val = 1; }
    else if(int_str == "Two" || int_str == "two"){int_val = 2; }
    else if(int_str == "Three" || int_str =="three"){int_val = 3;}
    else if(int_str == "Four" || int_str == "four"){int_val = 4;}
    //Output to user
    if(int_val != -1 ){ cout<< "Converted to Integer value of:"<< int_val;}
    else{cout << "Not a number I know!";}
}
