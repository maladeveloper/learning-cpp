#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main(){

    string first_name = ""; 
    string friend_name = ""; char friend_gen =' '; int friend_age = -1;  
    string pronoun = " ";  
    cout << "Please enter Name:"; cin >> first_name;
    cout << "Enter Friend Name:"; cin >> friend_name;
    cout << "Enter Friend gender (m/f):"; cin >> friend_gen; 
    cout << "Enter Friend age:"; cin >> friend_age;
    if (friend_gen=='m'){ pronoun="him";} else { pronoun="her";}//change the pronoun based on gender
    cout << "If you see your friend " << friend_name << " please ask " << pronoun << " to call me.";
    if(friend_age > 110 || friend_age < 0){
        cout << "You are lying about your age!";
    }else{
        cout << "I hear your birthday was recent and your age is " << friend_age << "."; 
    }
    //More age analysis
    if(friend_age < 12){ cout << "Next year you will be " << friend_age + 1 <<".";  }
    else if (friend_age==17){cout << "Next year you will be able to vote.";}
    else if (friend_age > 70){cout << "Enjoy retirement.";}
}
