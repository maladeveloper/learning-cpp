#include <iostream>
#include <vector>
#include <string>

using namespace std;


//Function to return whether element is not in a vector. 
bool not_in_vec( string el, vector<string> elems ){
    bool is_in = true; 
    for (int i=0; i < elems.size(); ++i){
        if (el == elems[i]){ is_in = false;}
    }
    return is_in; 
}


int main()
{
    vector<string> bleep_strs = {"mal", "sri"}; string bleep_replace = "BLEEP";
    string temp = ""; vector<string> temp_strs; 
    string exit_str = "q";

    cout << "Enter '" << exit_str << "' then ENTER to stop reading in strings.\n";

    //Capture the strings entered by user.
    while(cin >> temp){
        if(temp == exit_str){break;}
        if (not_in_vec(temp, bleep_strs)){ temp_strs.push_back(temp);} else { temp_strs.push_back(bleep_replace);}
    } 

    //Output cleaned sentance to user.
    for( int i = 0; i < (int)temp_strs.size(); ++i){ cout << temp_strs[i] << " "; }


}
