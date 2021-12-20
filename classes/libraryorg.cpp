#include "library_utils.h"
#include <vector>
#include <string>
#include <iostream>

namespace Library{

    //Setters
    void LibraryOrg::add_book(Book& b){ books.push_back(b);}
    
    void LibraryOrg::add_patron(Patron& p){ patrons.push_back(p);}
    
    void LibraryOrg::checkout_book(Book& b, Patron& p){
        Transaction t = {b, p};
        transacations.push_back(t);
    }

    //Getters
    std::vector<std::string> LibraryOrg::fee_names(){
        std::vector<std::string> names;
        for(Patron p : patrons){
            if(p.has_fee()){
                names.push_back(p.get_name());
            }
        }
        return names;
    }

    std::vector<std::string> LibraryOrg::get_transactions(){
        std::vector<std::string> all_trans;
        for(Transaction t : transacations){
            std::string trans_str;
            trans_str += "Book Title:" + t.book.get_title() + "\t"; 
            trans_str += "Patron:" + t.patron.get_name();
            all_trans.push_back(trans_str);
        }
        return all_trans;

    }

    
}