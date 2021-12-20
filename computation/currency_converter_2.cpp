#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double yen_conv = 109.23; double euro_conv = 0.83; double pnd_conv = 0.72;
    double input_num = -1; char input_cur = '_';
    double converted_cur = -1; double chosen_conv = -1;

    cout << "Enter the a dollar followed by (y/e/p) to convert to Yen/Eur/Pound: ";
    cin >> input_num >> input_cur; 
    
    //Conversion 
    switch (input_cur)
    {
    case 'y': chosen_conv = yen_conv; break;
    case 'e': chosen_conv = euro_conv; break;
    case 'p': chosen_conv = pnd_conv; break;
    }
    

    converted_cur = input_num * chosen_conv;

    cout << "Equals " << converted_cur << endl;
}
