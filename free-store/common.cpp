#include "my_utils.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

namespace common{
    void print_data_sizes(){
        std::vector<int>v(1);
        std::vector<int>* vp = &v;
        std::vector<int>v1(10);
        std::vector<int>* vp1 = &v1;
        std::vector<int>v2(100);
        std::vector<int>* vp2 = &v2;

        std::cout <<"Size of Char:"<< sizeof(char) << "\n"
        << "Size of Char*:"<< sizeof(char*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Bool:"<< sizeof(bool) << "\n"
        << "Size of Bool *:"<< sizeof(bool*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Int:"<< sizeof(int) << "\n"
        << "Size of Int*:"<< sizeof(int*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Short Int:"<< sizeof(short int) << "\n"
        << "Size of Short Int *:"<< sizeof(short int*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Long Int:"<< sizeof(long int) << "\n"
        << "Size of Long Int *:"<< sizeof(long int*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Long Long Int:"<< sizeof(long long int) << "\n"
        << "Size of Long Long Int *:"<< sizeof(long long int*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Unsigned Int:"<< sizeof(unsigned int) << "\n"
        << "Size of Unsigned Int *:"<< sizeof(unsigned int*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Float:"<< sizeof(float) << "\n"
        << "Size of Float *:"<< sizeof(float*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Double:"<< sizeof(double) << "\n"
        << "Size of Double *:"<< sizeof(double*) << "\n"
        <<"-----------------------------------\n"
        << "Size of String:"<< sizeof(std::string) << "\n"
        << "Size of String*:"<< sizeof(std::string*) << "\n"
        <<"-----------------------------------\n"
        << "Size of Vector size 1:"<< sizeof(v) << "\n"
        << "Size of Vector size 1*:"<< sizeof(vp) << "\n"
        <<"-----------------------------------\n"
        << "Size of Vector size 10:"<< sizeof(v1) << "\n"
        << "Size of Vector size 10*:"<< sizeof(vp1) << "\n"
        <<"-----------------------------------\n"
        << "Size of Vector size 100:"<< sizeof(v2) << "\n"
        << "Size of Vector size 100*:"<< sizeof(vp2) << "\n"
        <<"-----------------------------------\n";

    }    

    void to_lower(char* s){
        int i = 0;
        while(s[i] != 0){
            //Change to lower if upper.
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            ++i;
        }   
    }

    char* my_strdup(const char* s){
        int len = strlen(s);
        char* heap_str = new char[len + 1];
        for(int i = 0; i < len; ++i){
            heap_str[i] = s[i];
        }
        heap_str[len]  = '\0';
        return heap_str;
    }

    const char* my_findx(const char* s, const char* x){
        int len_s = strlen(s); 
        int len_x = strlen(x); 
        for(int i = 0; i < len_s; ++i){
            bool found = true;
            //std::cout << "Try start from " << s[i] << " - \n";
            for(int y = 0; y < len_x; ++y){
                //std::cout << "\tCheck next letter from S: " << s[i+y] << " from X:" << x[y] << "\n";
                if(s[i+y] != x[y]){
                    //std::cout << "\t\tNot Equal.\n";
                    found = false;
                }else{
                    //std::cout << "\t\tEQUAL!.\n";
                }
                
            }
            if(found){
                   
                return s + i;
            }
        }
        return 0;
    }

    void find_mem_exhaust(){
        unsigned alloc_space = 0;
        double sum = 0; 
        while(true){
            cout << "\n\n--------------------------------------------\n";
            cout << "New bytes allocation: "<< alloc_space << endl;
            try{
                int* p = new int[alloc_space];
                delete p; 
            }catch(std::bad_alloc e){
                cout << "Final space allocated has been:" << sum << " bytes.\n";
                cout << "Have run out of memory !";
                break;
            }
            sum += alloc_space; 
            alloc_space += 1000;
            
            cout << "Total bytes allocated: " << sum << endl; 
            cout << "--------------------------------------------";
        }
    }

    char* read_string(){
        int len = 2;
        int count = 0;
        char* str = new char[len];

        cout << "Enter characters one by one to make a string (press ! to exit) - \n";
        while(true){
            char temp;
            cout<<"\nEnter Character:";
            cin >> temp;
            if(temp == '!'){break;} 
            str[count] = temp;
            str[count + 1 ] = '\0';//Need to enter null terminator because not explicitly made when "new" is allocated.
            cout << str;
            count += 1;
            if(count >=  len){
                cout << "Space limit reached, thus making new allocation\n";
                len *= 2; 
                char new_str[len];
                strcpy(new_str, str);
                //cout << "Copied to new:" << new_str << endl; 
                //cout << "Before deletion str is:" << str << endl;
                delete[] str;
                //cout << "After deletion str is:" << str << endl;
                str = new char[len];
                strcpy(str, new_str);
                //cout << "Copied to actual new:" << str << endl;
                //cout << str[len - 1];
            }
            //cout << "Count:" << count << " Len:" << len << endl;  
        }

        return str;
    }
}

