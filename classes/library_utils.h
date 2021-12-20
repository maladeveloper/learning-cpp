#ifndef LIBRARY_H
#define LIBRARY_H

#include "library_utils.h"
#include <vector>
#include <string>
#include <iostream>

namespace Common{
    void print_string_vec (std::string label, std::vector<std::string>& vec); 
}
namespace Library{
    class Book{
        public:
            enum Genre {
                fiction, nonfiction, periodical, biography, children
            };
            Book(std::string ISBN,std::string title,std::string author,std::string copy_date, Genre genre);
            Book();
            bool isCheckedOut();
            std::vector<std::string> get_details();
            std::string getISBN();
            std::string get_title();
            std::string get_author();
            Genre get_genre();
            bool operator == (Book& b);
            bool operator != (Book & b);
        private:
            std::string ISBN;
            std::string title;
            std::string author;
            std::string copy_date;
            Genre genre; 
            bool checkedOut;
    };
    
    class Patron{
        public:
            Patron(std::string card_num, std::string name, double lib_fees);
            std::string get_card();
            std::string get_name();
            double get_fee();
            void set_fee(double new_fee);
            bool has_fee();

        private:
            std::string card_num;
            std::string name;
            double lib_fees;
    };

    struct Transaction{
    Book book; 
    Patron patron;
    };
    
    class LibraryOrg{
        public:
            void add_book(Book& b);
            void add_patron(Patron& p);
            void checkout_book(Book& b, Patron& p);
            std::vector<std::string> fee_names();
            std::vector<std::string> get_transactions(); 


        private:
            std::vector<Book> books;
            std::vector<Patron> patrons;
            std::vector<Transaction> transacations;

    };

}

std::ostream& operator << (std::ostream & os,Library::Book & b);






#endif 