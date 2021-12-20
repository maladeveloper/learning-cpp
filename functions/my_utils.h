#ifndef HEADERFILE_H
#define HEADERFILE_H

#include "my_utils.h"
#include <vector>
#include <string>


namespace common{
    void printVector (std::string label, std::vector<int> vec); 

    std::vector<double> fibonacci(double x, double y, std::vector<double> v, int n);
}

namespace vectorUtils{
    std::vector<int> new_reverse( std::vector<int> vec );
    void inplace_reverse(std::vector<int> & vec);
    struct vec_inf {
    double min; 
    double max; 
    double mean; 
    double median; 
    };
    vec_inf get_vec_inf(std::vector<double> vec);

}

namespace random{
    int randint(int min, int max);
}
#endif
