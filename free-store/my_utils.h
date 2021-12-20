#ifndef HEADERFILE_H
#define HEADERFILE_H

#include "my_utils.h"
#include <vector>
#include <string>
#include <iostream>

using std::string;

namespace common{
    void print_data_sizes();
    
    void to_lower(char* s);

    //Copies a char from stack onto the heap (free store) and returns the address.
    char* my_strdup(const char*); 

    //Returns the address of the first occurance of the substring x in string s. 
    const char* my_findx(const char* s, const char* x);
    
    //Finds the number of new memory that can be allocated before memory allocation.
    void find_mem_exhaust();

    //Read characters from the console until "!" is found.
    char* read_string();
}

namespace List{

    class Node{
        public:
            Node(Node* prev, Node* next, string val);
            string get_val();
            Node* get_next(); 
            Node* get_prev();
            void set_next(Node* next); 
            void set_prev(Node* prev); 

        private:
            Node* prev; 
            Node* next;
            string value;
    };

    class LinkedList{
        public:
            LinkedList();
            void append(string val);
            string pop();
            //Inserts value so it is at position i.
            void insert(string val, int index); 
            string remove(string val);
            string remove(int index);
            void print_list();

        private:
            Node* head;
            Node* get_last();
            //Returns node at specified index
            Node* get(int index);
    };

}


namespace examples{
    class ConDesCls{
        public:

            ConDesCls();
            ~ConDesCls();
            void test_print();

    };
}


#endif
