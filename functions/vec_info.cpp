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


int main3(){

    vector<double> my_vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100 };

    vec_inf info = get_vec_inf(my_vec);

    cout << "Max:"<< info.max << endl
         << "Min:"<< info.min << endl
         << "Median:"<< info.median << endl
         << "Mean:"<< info.mean;
}