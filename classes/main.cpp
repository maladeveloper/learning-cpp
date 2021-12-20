#include <iostream>
#include <vector>
#include <string>
#include "library_utils.h"
using namespace std;

namespace Common{
    void print_string_vec(std::string label, std::vector<std::string>& vec){
        cout << label << endl;
        for(int i = 0; i < vec.size(); ++i){ cout << "|" << vec[i] << ((i==vec.size()-1) ? "|\n" : "");}
        cout << endl; 
    }
}


int main(){
    //Define some books
    Library::Book::Genre genre = Library::Book::biography;
    Library::Book b1 = Library::Book("1244", "b1", "mal", "10", genre);
    Library::Book b2("1244", "b1", "mal", "10", genre);
    Library::Book b3("1234", "b1", "mal", "10", genre);

    //Define some patrons
    Library::Patron p1("1234", "Malavan", 10); 
    Library::Patron p2("4321", "Maiyuren", 0); 
    Library::Patron p3("1342", "Sri", 13); 
    Library::Patron p4("1423", "Anu", 0); 

    //Define a library  organisation.
    Library::LibraryOrg lib;
    Library::LibraryOrg* lib1  = &lib;
    cout<< "Address of the library:" << lib1<< "\n";
    lib.add_book(b1); lib.add_book(b2); lib.add_book(b3);
    lib.add_patron(p1); lib.add_patron(p2); lib.add_patron(p3); lib.add_patron(p4);
    lib.checkout_book(b1, p1);
    lib.checkout_book(b3, p1);
    lib.checkout_book(b3, p1);

    //Check library
    //vector<string> fee_names = lib.fee_names();
    vector<string> fee_names = (*lib1).fee_names();
    vector<string> transactions = lib.get_transactions();
    delete[] lib1;
    Common::print_string_vec("Members with fees-", fee_names);
    Common::print_string_vec("All transactions-", transactions);





}
