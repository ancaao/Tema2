//
// Created by Anca on 11/27/2022.
//

#ifndef MAIN_CPP_LIBRARY_H
#define MAIN_CPP_LIBRARY_H

#include "Book.h"
#include <algorithm>

class Library{
    std::string name;
    std::vector<Book> books;
public:
    Library() = default;
    ~Library() = default;

    void add_book(const Book& book);

    auto find(const std::string& title) const {
        auto title_match_fn = [title](auto book) {
            return book.getTitle() == title;
        };
        auto it = find_if(begin(books), end(books), title_match_fn);
        if (it == end(books)) std::cout << "Book unavailable\n";
        else std::cout << "Book available\n";
        return it;
    }

    std::vector<Book> filter_by_genre(Genre genre) const;

    void remove_book(const std::string& title);

    Library(const std::string& name_, const std::vector<Book>& books_);

    friend std::ostream& operator<<(std::ostream& os, const Library& library);
};
#endif //MAIN_CPP_LIBRARY_H
