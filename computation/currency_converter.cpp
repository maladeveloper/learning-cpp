#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double yen_conv = 109.23; double euro_conv = 0.83; double pnd_conv = 0.72;
    double input_num = -1; char input_cur = '_';
    double converted_cur = -1;

    cout << "Enter the a dollar followed by (y/e/p) to convert to Yen/Eur/Pound: ";
    cin >> input_num >> input_cur; 
    
    //Conversion 
    if      (input_cur == 'y') {converted_cur = input_num * yen_conv;}
    else if (input_cur == 'e'){converted_cur = input_num * euro_conv;}
    else if (input_cur == 'p'){converted_cur = input_num * pnd_conv;}

    cout << "Equals " << converted_cur << endl;
}
