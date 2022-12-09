#include<fstream>
#include "src/Author.cpp"
#include "src/Publisher.cpp"
#include "src/Book.cpp"
#include "src/Library.cpp"


int main() {
    std::vector<Author> author;
    std::string name, gender, nationality;

    std::ifstream fin;
    fin.open ("database.txt");
    if (fin.is_open()) {
//        char st = ',';
    std::string line;
        while ( getline (fin,line) )
        {
            std::cout << line << '\n';
        }
        fin.close();
//        while(fin){
//            if(st == getchar()){
//                std::getline(fin, name, ',');
//                std::getline(fin, gender, ',');
//                std::getline(fin, nationality, ',');
//            }
//            author.push_back(Author(name, gender, nationality));
//        }
    } else {
        std::cerr << "Error in opening the file" << std::endl;
        return 1;
    }

    Author eminescu("Mihai Eminescu", "male", "romanian");
    std::cout << eminescu;
    Author creanga("Ion Creanga", "male", "romanian");
    std::cout << creanga;
    Author braniste("Lavinia Braniste", "female", "romanian");
    std::cout << braniste;

    Publisher nemira("Nemira", {eminescu});
    nemira.add_author(braniste);
    std::cout << nemira;


    Book b1("Luceafarul", eminescu, nemira, 25.3f, Genre::Poetry, 1987);
    Book b2("Ion", braniste, nemira, 25.3f, Genre::Fiction, 1987);


    Library l("lalala", {b1});
    l.add_book(b2);
    l.find("Ion");

    std::vector<Book> Fiction_books = l.filter_by_genre(Genre::Fiction);
    for (const Book& book: Fiction_books) std::cout << book <<" ";

    l.remove_book("Ion");
    l.remove_book("Iona");

    std::cout<<l;

    return 0;
}
