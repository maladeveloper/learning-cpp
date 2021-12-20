#include "my_utils.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

namespace examples{
    ConDesCls::ConDesCls(){
        //std::cout << "\tHello I am the constructor!\n";
    }

    ConDesCls::~ConDesCls(){std::cout << "\tDESTRUCTION\n";}

    void ConDesCls::test_print(){
        std::cout << "\nI am still alive !\n";
    }
}