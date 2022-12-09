//
// Created by Anca on 11/27/2022.
//

#ifndef MAIN_CPP_BOOK_H
#define MAIN_CPP_BOOK_H

#include<iostream>
//#include "Author.h"
#include "Publisher.h"

enum class Genre{Fiction, Nonfiction, Drama, Poetry, Folktale};

class Book{
protected:

    std::string title;
    Author author;
    Publisher publisher;
    float price;
    Genre genre;
    int year;
public:
    Book() = default;
    ~Book() = default;

    std::string getTitle() const;
    Genre getGenre() const;

    Book(const std::string& title_, const Author& author_, const Publisher& publisher_,float price_,
         const Genre& genre_, int year_);

    friend std::ostream& operator<<(std::ostream& os, const Book& book);
};
#endif //MAIN_CPP_BOOK_H
