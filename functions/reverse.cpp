#include <vector>
#include <string>
#include <iostream>
#include "my_utils.h"

void swap(int& x, int& y){
    int temp = x;  x = y; y = temp; 
}

void reverse(std:: vector<int> & vec){
    
    int end = vec.size() - 1; int start = 0;

    while(start < end){
        swap(vec.at(start), vec.at(end));
        ++start; --end;  
    }
}

std::vector<int> vectorUtils::new_reverse( std::vector<int> vec ){
    reverse(vec); return vec; 

}

void vectorUtils::inplace_reverse(std::vector<int> & vec){

    reverse(vec); return;
}

