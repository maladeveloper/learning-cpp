#include <iostream>
#include <vector>
#include <string>
#include "my_utils.h"

using common::printVector;
using common::fibonacci;
using vectorUtils::new_reverse;
using vectorUtils::inplace_reverse;
using namespace std;

int main(){

    vector<int> vec = {1, 2, 3};

    cout << "Reverse vector returning new vector."<< endl; 

    vector<int> new_vec = new_reverse(vec); 

    printVector("Original Vector", vec); printVector("New Vector", new_vec);

    cout << "Reversing vector in place." << endl; 
    
    inplace_reverse(vec); 

    printVector("Original Vector", vec); 

    return 0;
}
