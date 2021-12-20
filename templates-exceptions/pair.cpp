#include <iostream>
#include <vector>
#include <string>
#include "my_utils.h"

using namespace std;

namespace common{
    template<class T, class U> void Pair<T,U>::print_val( string sep_str){
        cout << val1 << sep_str << val2 << endl;
    };

    template class Pair<int, double>;
    template class Pair<string, int>;

     template<class T, class U> Pair<T,U>::Pair(T val1, U val2)
     :val1(val1), val2(val2){};

     
}