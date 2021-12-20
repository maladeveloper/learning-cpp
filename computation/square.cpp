#include <iostream>
#include <vector>
#include <string>

using namespace std;

int square(int x)   
{
    int ret_val = 0; 
    for(int i = 0 ; i < x; i++) {ret_val += x; }
    return ret_val;
}

int main()
{
    int val = 5;

     int squared_val = square(val);

    cout <<"The square of the value " << val<< " is: " << squared_val ;

    



}
