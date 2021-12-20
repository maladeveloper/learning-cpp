#ifndef HEADERFILE_H
#define HEADERFILE_H

#include "my_utils.h"
#include <vector>
#include <string>


namespace common{
    //Prints out an array of integers.
    void print_vector (std::string label, std::vector<int> vec);

    //Prints out an array of strings. 
    void print_vector (std::string label, std::vector<std::string> vec); 
}

#endif