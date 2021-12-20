#include "my_utils.h"
#include <vector>
#include <string>
#include <iostream>
using std::string;

namespace List{
    Node::Node(Node* prev, Node* next, string val){
        this->next = next; 
        this->prev = prev; 
        this->value = val;
    };

    string Node::get_val(){return value;}

    Node* Node::get_next(){return next;}

    Node* Node::get_prev(){return prev;}

    void Node::set_next(Node* next){ this->next = next;}

    void Node::set_prev(Node* prev){ this->prev = prev;}

}