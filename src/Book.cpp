//
// Created by Anca on 11/27/2022.
//
#include "../headers/Book.h"

std::string Book::getTitle() const { return title; }

Genre Book::getGenre() const { return genre; }

//constr de init/param
Book::Book(const std::string& title_, const Author& author_, const Publisher& publisher_,float price_,
     const Genre& genre_, int year_) : title{title_}, author{author_},
                                       publisher{publisher_},
                                       price{price_}, genre{genre_},
                                       year{year_} {}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << ", Author - " << book.author <<
       "Publisher - " << book.publisher.getName() << ", Price: " << book.price <<
       ", Genre: " << static_cast<int>(book.genre) << ", Year: " << book.year << "\n";
    return os;
}