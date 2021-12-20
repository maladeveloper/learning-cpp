#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    
    double val1 = 0;double val2 = 0;  
    cout << "Enter 2 Floating Points:"; cin >> val1; cin >> val2;
    double smallest = val1; double largest = val2; 
    if (val1 > val2){largest = val1; smallest= val2;}
    cout << "Smallest:" << smallest
         << "\nLargest:" << largest
         << "\nSum:" << val1 + val2
         << "\nDifference:" << largest - smallest
         << "\nProduct:" << val1 * val2
         << "\nRatio:" << largest/smallest << ":" << 1;
}
