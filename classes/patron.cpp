#include "library_utils.h"
#include <vector>
#include <string>
#include <iostream>

namespace Library{
    
    Patron::Patron(std::string card_num, std::string name, double lib_fees)
           : card_num(card_num), name(name), lib_fees(lib_fees){};

    //Getters
    std::string Patron::get_card(){return card_num;}
    std::string Patron::get_name(){return name;}
    double Patron::get_fee(){return lib_fees;}
    bool Patron:: has_fee(){return ((lib_fees > 0) ? true : false); }

    //Setters
    void Patron::set_fee(double new_fee){ lib_fees = new_fee;}

}