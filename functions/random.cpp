#include <chrono>
#include <vector>
#include <iostream>
#include <string>
#include "my_utils.h"
#include <time.h>

int get_clock(){

    return static_cast<int> (time(NULL));

}

/**
 * @brief Uses the The Linear Congruential Generator to
 * generate random integers. The seed is the system clock since 
 * epoc.
 */
int random::randint(int min, int max){

    int m = 5;int a = 4; int b = 3;


    int range = (max - min) + 1;
    


    //The amount of number of periods, between this time_point and the system clocks epoch
    int seed = get_clock();

    
    if (seed < 0){ seed = (seed * -1) + 1;}

    int randnum = max - (seed % range);

    
        // std::cout<< "Range:" << range << std::endl;
        // std::cout << "Seed:" <<  seed <<std::endl;
        // std::cout << "(seed % range):" << (seed % range) << std::endl;
    

    return randnum;

    
}