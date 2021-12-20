#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<double> get_input(){
    vector<double> input_nums; double temp = 0;
    cout << "Enter some numbers and press 'q' then ENTER to quit:"; 
    while(cin >> temp){
        input_nums.push_back(temp); 
    }
    return input_nums;
}

int main(){

    vector<double> input = get_input(); double median = 0;

    sort(input.begin(), input.end()); 

    int middle_ind = (input.size() / 2);

    if(input.size() % 2 == 0){
        median = (input[middle_ind - 1] + input[middle_ind]) / 2;
    }
    else{
        median = input[middle_ind]; 
    }

    cout << "The median of these numbers is: " << median; 
}
