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

void remove_nums( int new_prime, vector<int>& nums){

    for(int  i = nums.size() - 1; i > -1; --i){
        if( nums[i] % new_prime == 0){
            nums.erase(nums.begin() + i);
        }
    }

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

    while(all_nums.size() > 0){
        int num = all_nums[0];
        if(is_prime(num, primes)){ 
            primes.push_back(num);
            //ALSO optimise to remove from nums any multiples of this prime.
            remove_nums(num, all_nums);
        }
    }

    //cout << "The primes from 0 to " << max_range << " are "; 
    //for(int prime : primes){ cout << prime << " ";}
    cout << endl << "The number of primes from 0 to " << max_range << " is " << primes.size() << endl;
    //Finish time taken 
    t = clock() - t;   
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    cout << " C++ Time taken for execution:" << time_taken << " seconds.";


}
