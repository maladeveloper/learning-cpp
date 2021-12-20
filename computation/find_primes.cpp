#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <time.h>


using namespace std;

bool is_prime(int num, vector<int> prev_primes){
    //check to see if it is divisible by any other prime in previous primes.
    for(int prime : prev_primes){
        if(num % prime == 0){ return false;}
    }
    return true;
}


int main(){
    
    int max_range = 100;
    //Ask user to enter max range. 
    cout << "Find primes until which number?"; 
    cin >> max_range;

    //Calculate time taken by program.
    clock_t t;
    t = clock();

    vector<int> primes; 
    vector<int> all_nums(max_range - 1 ); iota(all_nums.begin(), all_nums.end(), 2);

    for(int num : all_nums){
        if(is_prime(num, primes)){ primes.push_back(num);}
    }
    cout << "The primes from 0 to " << max_range << " are "; 
    for(int prime : primes){ cout << prime << ", ";}
    cout << endl << "The number of primes from 0 to " << max_range << " is " << primes.size() << endl;
    //Finish time taken 
    t = clock() - t;   
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    cout << " C++ Time taken for execution:" << time_taken << " seconds.";


}
