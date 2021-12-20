#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string operation = " "; 
    double operand1 = -1; double operand2 = -1; double result = -1;  
    cout << "Enter an operator followed by 2 numbers:"; cin >> operation >> operand1 >> operand2; 
    //Do operation
    if(operation == "+"){ result = operand1 + operand2;}
    else if(operation == "-"){result = operand1 - operand2;}
    else if(operation == "*"){result = operand1 * operand2;}
    else if(operation == "/"){result = operand1 / operand2;}
    //Output results 
    if(operation != " "){ cout << "Result:"<< result;}
    else{cout << "This operation does not exists!";}

}
