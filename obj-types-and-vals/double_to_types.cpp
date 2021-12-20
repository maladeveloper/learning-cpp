#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;



int main(){

    double d = 0;
    
    while(cin >> d ){

        int d2i = d; 
        char i2c = d2i;
        int c2i = i2c; 
        bool d2b = d;
        
        cout << "Double == " << d << "\n"
             << "Double to Int == " << d2i << "\n"
             << "Integer to Char == " << i2c << "\n"
             << "Char to Integer == " << c2i << "\n"
             << "Double to Bool == " << d2b
             << "\n";
        }
}