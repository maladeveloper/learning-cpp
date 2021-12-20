#include "library_utils.h"
#include <vector>
#include <string>
#include <iostream>

namespace Library{
    Book::Book(std::string ISBN,std::string title,std::string author,std::string copy_date, Genre genre)
        :ISBN(ISBN), title(title), author(author), copy_date(copy_date), genre(genre){};

    Book default_book(){
        Book::Genre genre = Book::fiction;
        static Book b("1234", "LearningCpp", "Malavan", "12/12/2021", genre);
        return b;
    }

    Book::Book():ISBN(default_book().ISBN), title(default_book().title), author(default_book().author), copy_date(default_book().copy_date){};
    
    std::vector<std::string> Book::get_details(){
        std::vector<std::string> vec {ISBN, title, author, copy_date};
        return vec;
    }
    std::string Book::getISBN(){return ISBN;}
    std::string Book::get_title(){return title;}
    std::string Book::get_author(){return author;}
    Book::Genre Book::get_genre(){return genre;}

    bool Book::operator == (Book & b){
        if((this-> ISBN) == b.getISBN()){
            return true;
        }
        return false;
    }

    bool Book:: operator != (Book & b ){
        if(this->ISBN != b.getISBN()){
            return true;
        }
        return false;
    }
    


}
std::ostream & operator << (std::ostream & os, Library::Book & b){
    os << "Title:" << b.get_title() << "\n" 
       << "Author:" << b.get_author() <<"\n" 
       << "ISBN:" << b.getISBN() << "\n"
       << "Genre:" << b.get_genre();
    return os;
}