#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main(){
    int value = 0; 
    string parity = "odd";
    cout << "Enter Integer value:"; cin >> value;
    if(value % 2 == 0){ parity="even";}
    cout << "The value " << value << " is an " << parity << " number.";
}
