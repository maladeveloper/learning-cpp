#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_int(string test_str){
    char *p;
    strtol(test_str.c_str(), &p, 10);
    return (*p == 0); 
}

int main(){

    vector<string> num_str = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    cout << "Enter either number to convert to its name or to its digit: ";
    string name = " "; 
    string final_str = ""; 
    cin >> name;
    if (is_int(name)){
        final_str = num_str.at(stoi(name));
    }
    else{
        for(int i = 0; i < num_str.size(); ++i){
            if (num_str[i] == name){ final_str = to_string(i);} 
        }
    }
    cout << "Converted To: " << final_str; 
}
