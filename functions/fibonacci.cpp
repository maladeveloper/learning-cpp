#include "my_utils.h"
#include <vector>
#include <string>

std::vector<double> common::fibonacci(double x, double y, std::vector<double> v, int n){
    
    int num_elems = n - 2; // Minus 2 because, x and y already are the first two numbers.
    int last_el_ind = 1;
    v = {x, y};

    while (num_elems > 0){

        v.push_back(v.at(last_el_ind) + v.at(last_el_ind-1));

        ++last_el_ind;
        --num_elems;
        
    }

    return v;
}

