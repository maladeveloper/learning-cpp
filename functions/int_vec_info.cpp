#include "my_utils.h"
#include <vector>
#include <string>
#include <algorithm>


using vectorUtils::vec_inf; 
using std::vector; 


vec_inf vectorUtils::get_vec_inf(std::vector<double> vec){

    vec_inf ret_inf;
    int num_els = vec.size();

    //sort the array
    std::sort(vec.begin(), vec.end());

    //Get min and max
    ret_inf.max = vec.back(); ret_inf.min = vec.front();

    //Get mean
    double sum = 0; 
    for(auto  n: vec){ sum += n;};
    ret_inf.mean = (sum / num_els);

    //Get median
    int ind = (num_els-1) / 2;
    if(num_els % 2 == 0){ 
        
        ret_inf.median = (vec.at(ind) + vec.at(ind + 1))/2 ; 
    }
    else{
        ret_inf.median = vec.at(ind); 
    }

    return ret_inf;

}
