#include "my_utils.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
using std::string;
using std::cout; 
using std::endl;

namespace List{

    LinkedList::LinkedList():head(0){}

    void LinkedList::append(string val){
        if(head){
            Node* prev_node = this->get_last();
            //cout << "Add after node with value:" << prev_node->get_val() << endl;
            Node* new_node = new Node(prev_node, 0, val); 
            prev_node->set_next(new_node); 
        }else{
            //cout << "No current head so setting this as new head\n";
            Node* new_node = new Node(0, 0, val);
            head = new_node;
        }
    }

    string LinkedList::pop(){
        Node* last_node = this->get_last();
        if(!last_node){throw std::out_of_range("Cannot pop without any items in list!");}
        string ret_val = last_node->get_val();
        Node* new_last = last_node->get_prev();
        if(new_last){
            new_last->set_next(0);
        }else{
            this->head = 0;
        }
        delete last_node;
        return ret_val; 
    }

    void LinkedList::insert(string val, int index){
        Node* next_node = 0; 
        try{
            next_node = get(index);
        }catch (std::out_of_range e){
            throw std::out_of_range("Cannot insert at a position that is out of range!");
        }
        Node* prev_node = next_node->get_prev();
        Node* node = new Node(prev_node, next_node, val);
        if(!prev_node){ this->head = node;}else{ prev_node->set_next(node);}
        next_node->set_prev(node);
        return; 
    }   



    Node* LinkedList::get(int index){
        Node* curr_node = head; 
        for(int _=0; _<index; ++_){
            curr_node = curr_node->get_next();
            if(!curr_node){ throw std::out_of_range("Cannot get index that is out of range!");}
        }
        return curr_node;
    }



    Node* LinkedList::get_last(){
        Node* ret_node = head;
        if(!ret_node){return ret_node;}
        while(ret_node->get_next()){
            ret_node = ret_node->get_next();
        }
        return ret_node;
    }


    void LinkedList::print_list(){
        Node* curr_node = head;
        cout << "[";
        while(curr_node){
            cout << curr_node->get_val() << ",";
            curr_node = curr_node->get_next(); 
        }
        cout << "]\n"; 

    }
}