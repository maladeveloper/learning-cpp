#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    
    string val1 = " "; string val2 = " "; string val3 = " ";
    cout << "Enter 3 Strings:"; cin >> val1 >> val2 >> val3;   

    cout << "Elements in reverse order are:";
    if (val1 > val2 && val1 > val3){

        if(val2 > val3){

            cout << val1 << " " << val2 << " " << val3;
        } else{

            cout << val1 << " " << val3 << " " << val2;
        }
    } 
    else if(val2 > val1 && val2 > val3){

        if(val1 > val3){

            cout << val2 << " " << val1 << " " << val3;

        }else{

            cout << val2 << " " << val3 << " " << val1;
        }
    }
    else{

        if(val1 > val2){
            
            cout << val3 << " " << val1 << " " << val2;

        }else{

            cout << val3 << " " << val2 << " " << val1;
        
        }
    }
}
