#include <iostream>
#include <string>
#include <vector>
using namespace std;




struct Book {
    string name_of_book;
    string author;
    string age;
    int pages;
    vector<string> hobbits;
    vector<string> wizards;
};


int main() {
    Book hobbit;
    Book book1;
    Book book2;
    int a;
    vector <Book> v;


    hobbit.name_of_book =  "Hobbit";
    hobbit.author = "Tolkien";
    hobbit.age = "1932";
    hobbit.hobbits.push_back("Bilbo Baggins");
    hobbit.hobbits.push_back("Bungo Baggins");
    hobbit.hobbits.push_back("Belladonna Took");
    hobbit.hobbits.push_back("The Old Took");
    hobbit.hobbits.push_back("Chubb");
    hobbit.hobbits.push_back("The Sackville-Bagginses");
    hobbit.hobbits.push_back("Bullroarer Took");
    hobbit.wizards.push_back("Gandalf");
    hobbit.wizards.push_back("Rodogast");


    book1.name_of_book = "LOTR";
    book1.author = "Tolkien";
    book1.age = "1932";

    book2.name_of_book = "Sauron";
    book2.author = "Tolkien";
    book2.age = "1932";
    std::cout << "Hello World!\n";

    std::cout << v.size();
    v.push_back(hobbit);
    std::cout << v.size();
    v.push_back(hobbit);
    v.push_back(hobbit);
    v[0].name_of_book = "doctor";
    std::cout << v.size();
    std::cout << v[2].name_of_book;

}

