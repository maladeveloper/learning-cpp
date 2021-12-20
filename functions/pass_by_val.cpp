#include <iostream>
#include <vector>
#include <string>
#include "my_utils.h"

using common::printVector;
using common::fibonacci;
using vectorUtils::new_reverse;
using vectorUtils::inplace_reverse;
using vectorUtils::get_vec_inf; 
using vectorUtils::vec_inf;
using random::randint;
using namespace std;
/*

*/

int func(const int i ){

    //i = i +1;//Cannot do this i.e cannot modify variable in function.
    
    return i;
}

int main(){
    int num = 2;

    cout << func(num);
}