#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <time.h>
#include <bits/stdc++.h>


using namespace std;

vector<string> input_strs(){
    cout << "Enter some strings followed by a space (press q to exit):";
    string temp_str;
    vector<string> input_strs;
    while(cin >> temp_str){
        if(temp_str == "q"){ break;}
        input_strs.push_back(temp_str);
    }
    return input_strs;
}

string mode( vector<string> strs){
    sort(strs.begin(), strs.end());
    int mode_int; 
    int mode_counter = 0;
    int max_count = 0;
    for( int i = 1; i < strs.size(); ++i){
        if( strs[i] == strs[i-1]){ ++mode_counter; }
        else if(mode_counter > max_count){
            mode_int = i - 1; max_count = mode_counter;
            mode_counter = 0;    
        }
        else{ mode_counter = 0;}
    }
    return strs[mode_int];
}

string min(vector<string> strs){
    sort(strs.begin(), strs.end());
    return strs.front();
}

string max(vector<string> strs){
    sort(strs.begin(), strs.end());
    return strs.back(); 
}

int main(){
    vector<string> strs = input_strs() ;
    cout << "The mode of the strings are: " << mode(strs) << endl;
    cout << "The max of the strings are: " << min(strs) << endl; 
    cout << "The min of the strings are: " << max(strs) << endl;
}
