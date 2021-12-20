#ifndef HEADERFILE_H
#define HEADERFILE_H

#include "my_utils.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace common{
    //Prints out an array of integers.
    void print_vector_int (std::string label, std::vector<int> vec);

    //Prints out an array of strings. 
    void print_vector_str (std::string label, std::vector<std::string> vec);

    //Use templates to print a vector of anything.
    template<class T> void print_vector(string label, vector<T>vec){
    cout << label << endl;
    for(int i = 0; i < vec.size(); ++i){ cout << vec[i] << ",\t";}
    cout << endl; 
    }

    //Use templates to find the sum of the product of 2 vectors.
    template<class T, class U> void return_sum(vector<T> vt, vector<U> vu){
        double sum = 0;
        if(vt.size() != vu.size()){ throw std::invalid_argument("Vectors are of different sizes !");}
        for( int i = 0; i < vt.size(); ++i ){
            sum += vt[i] * vu[i];
        }
        cout << "The vector product of these 2 vectors is:" << sum;
    }

    template<class T, class U> class Pair{
        public:
            Pair(T val1, U val2);
            //Prints out the pair value seperated by the given seperator string.
            void print_val(std::string sep_str);
        private:
            T val1; 
            U val2;
    };
}

#endif