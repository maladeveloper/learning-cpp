#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a_val = 97; int num_letters = 26;char a_char = 'a';
    int i = 0; 

    while (i < num_letters){

        cout << char(a_char + i) << "\t" << i + a_val << endl;

        ++i;  
    }

}
