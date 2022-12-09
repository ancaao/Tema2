//
// Created by Anca on 11/27/2022.
//

#include "../headers/Author.h"

//operator<<
std::ostream & operator<< (std::ostream& os, const Author& author) {
    os << "Name: " << author.name << ", gender: " << author.gender << ", nationality: " << author.nationality << "\n";
    return os;
}
//constructor parametrizat
Author::Author(const std::string name, const std::string gender, std::string nationality): name(name), gender(gender), nationality(nationality){}