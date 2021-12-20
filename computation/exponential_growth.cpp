#include <iostream>
#include <vector>
#include <string>

using namespace std;

void output_res(int goal, int cur_square, int cur_rice){

    cout << "To reach " << goal << " grains of rice, we need to reach the " << cur_square << " square"
         << " which would have " << cur_rice << " grains of rice." << endl;
}



int main(){
    
    int MAX_SQUARES = 64;
    vector<int> goal_nums = {1000, 1000000, 1000000000};
    int rice_num = 1;

    for(int sqr_num = 1; sqr_num < MAX_SQUARES + 1; ++sqr_num){
        //Break early if no more goals. 
        if(goal_nums.size() == 0 ){ break; }
        //Iterate through all the goals starting at the back. 
        for(int n = goal_nums.size() - 1 ; n > -1; --n ){
            if (rice_num > goal_nums[n]){
                output_res(goal_nums[n], sqr_num, rice_num);
                //Delete this goal
                goal_nums.erase(goal_nums.begin() + n );
            }
        }
        rice_num *= 2; 
    }

}
