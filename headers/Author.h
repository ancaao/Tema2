//
// Created by Anca on 11/27/2022.
//

#ifndef MAIN_CPP_AUTHOR_H
#define MAIN_CPP_AUTHOR_H

#include<iostream>

class Author{
    std::string name;
    std::string gender;
    std::string nationality;
public:
    Author() = default;
    ~Author() = default;

    friend std::ostream& operator<<(std::ostream& os, const Author& author);

    Author(std::string name, std::string gender, std::string nationality);
};

#endif //MAIN_CPP_AUTHOR_H
