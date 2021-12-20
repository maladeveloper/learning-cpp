#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    cout << "Please enter an integer:";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nn three times == " << n*3
         << "\nn square root == " << sqrt((double) n  )
         << "\nn modulo 3 == " << n % 3
         << "\n";
}
