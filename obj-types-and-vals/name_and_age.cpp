#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int months = 12; 
    cout << "Please enter name followed by age:";
    string name; 
    double age; 
    cin >> name >> age; 
    cout << "Hello " << name << ", your age in months is: " << age * months;
}
