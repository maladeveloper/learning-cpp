#include <iostream>
#include <vector>
#include <string>
#include "my_utils.h"

using namespace std;
/*

*/

void common::print_vector(string label, vector<int> vec){
    
    cout << label << endl;
    for(int i = 0; i < vec.size(); ++i){ cout << vec[i] << ",\t";}
    cout << endl; 
}

void common::print_vector(string label, vector<string> vec){
    cout << label << endl;
    for(int i = 0; i < vec.size(); ++i){ cout << vec[i] << ",\t";}
    cout << endl; 
}