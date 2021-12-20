#include <iostream>
#include <vector>
#include <string>
#include "my_utils.h"
#include <sstream>
#include <stdint.h>
#include <cstdint>
using namespace std;

int main(){
    vector<string> vec(10,"Hi");
    vector<double> vec_double(10, 10);
    //common::print_vector("Vector of Strings:", vec);
    //common::print_vector("Vector of Doubles:", vec_double);
    
    ////Finding the vector sum of unrelated types. 
    vector<int> vec_int(1,3); 
    vector<double> v_dub(1, 1.5);
    //common::return_sum(vec_int, v_dub);

    ////Make a class that  can hold the pair of two different types.
    common::Pair<int, double> my_pair = common::Pair<int, double>(12, 2.3);
    //my_pair.print_val(", ");
    common::Pair<string, int> sec_pair = common::Pair<string, int>("Integer Two", 2);
    //sec_pair.print_val(":");








}