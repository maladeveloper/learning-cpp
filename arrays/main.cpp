#include <iostream>
#include <vector>
#include <string>
#include "my_utils.h"
#include <sstream>
#include <stdint.h>
#include <cstdint>
using namespace std;

using common::print_vector;
int main(){

    //Copying the vector.
    vector<string> vec1 = {"Hi ", "Mal"}; 
    vector<string>& vec2 = vec1;
    vector<string> vec3 = vec1; //Implicitly does a copy. 
    vec2[0] = "LOL";
    vec3[1] = "YOO"; 
    //print_vector("Vector 1:", vec1); 
    //print_vector("Vector 2:", vec2);
    //print_vector("Vector 3:", vec3);
    //cout << "Address of vector 1:" << &vec1 << endl << "Address of vector2:" << &vec2 << endl << "Address of vector3:" << &vec3 << endl;
    //Copying an integer. 
    int int1 = 2;
    int int2 = int1; //Implicitly does a copy of the element. 
    int& int3 = int1; // Actually referances the integer - something that cannot be done in python since an integer is an immutable.
    int int4 = int3;
    int& int5 = int3;
    // cout << "Address of int1:" << &int1 << endl << "Address of int2:" << &int2 << endl << "Address of int3:" << &int3 << endl << "Address of int4:" << &int4 << endl
    //      << "Address of int5:" << &int5 << endl;
     int1 += 100;  
    // cout << "After adding 100 to int1 the value of the numbers are as follows - \n"
    //      << "int1:" << int1 << endl << "int2:" << int2 << endl << "int3:" << int3 <<endl << "int4:" << int4 << endl << "int5:" << int5 << endl;
    /**
     * @brief In Python when you set a variable to point to another it becomes a referance 
     * to that object (except if it is an immutable object such as a string or a number - which is copied). 
     * In C++ however, unless specified otherwise, setting a variable to point to another actually 
     * copies over the object - this is not the case when it is explicitly set as a referance.
     */

    
    ////Initialising an array
    int n = 0;
    //cout << "Please enter an integer value for the size of the array:"; 
    //cin >> n;
    char my_stack_arr[n];
    char* my_heap_arr = new char[n];
    for(int i=0; i < n; ++i ){
        my_heap_arr[i] = 'a'; 
        my_stack_arr[i] = 'b';
    }
    //cout << "Address of my stack array:" << (int*) &my_stack_arr << endl <<"Address of my heap array:" << (int*) my_heap_arr << endl;
    //cout << "Contents of my stack array:" << my_stack_arr << endl << "Contents of my heap array:" << my_heap_arr;
    /**
     * @brief Even though in the official text, stack array cannot be initialised dynamically, that is their memory space 'n' my be known 
     * at runtime, as we can see from the example above, this version of c++ allows for dynamic allocation of both heap arrays 
     * and stack arrays
     */

    char strs[] = {'H', 'i', '\0'}; 
    //cout << strs;
    /**
     * @brief Note, in char arrays initialised by the {}, the \0 must  be explicitly added, this is opposed to initialisation 
     * via string literal i.e char strs[] = "Hi", which implicitly adds the \0 character at the end.
     */

    ////See which way the stack grows in comparison to the way the heap grows
    //stack int arrays
    int is1[100000];
    int is2[100000];
    int is3[100000];
    int is4[100000];
    vector<int*> stack_arr_ptrs = {is1, is2, is3, is4};
    //heap int arrays
    int* ih1 = new int[100000];
    int* ih2 = new int[100000];
    int* ih3 = new int[100000];
    int* ih4 = new int[100000];
    vector<int*> heap_arr_ptrs = {ih1, ih2, ih3, ih4};
    cout << "Addresses stored on the stack go:" << is1 << ", " << is2 << ", " << is3 << ", " << is4 << endl;
    cout << "Addresses stored on the heap go:" << ih1 << ", " << ih2 << ", " << ih3 << ", " << ih4 << endl;
    for(int i = 0; i < 4; ++i ){
        cout << "Element " << i << " - " << endl;
        cout << "Stack Address:" << reinterpret_cast<uintptr_t>(stack_arr_ptrs[i]) << endl;
        cout << "Heap Address:" << reinterpret_cast<uintptr_t>(heap_arr_ptrs[i]) << endl << endl;
    }
    /**
     * @brief As we can see from the example above, each new object placed on the stack is at a lower memory address 
     * than the one before, whilst each new object placed on the heap is at a higher memory address - thus we can 
     * se that the stack grows downwards, whilst the heap grows upwards.
     * 
     */





}