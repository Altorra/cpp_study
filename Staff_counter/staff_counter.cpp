#include <iostream>
#include <string>
using namespace std;

struct Book {
    string name_of_book;
    string author;
    string age;
    int pages;
};


int main() {
    Book hobbit;
    Book dve[2];

    hobbit.name_of_book =  "Hobbit";
    hobbit.author = "Tolkien";
    hobbit.age = "1932";

    

    dve[0].name_of_book =  "Hobbit";
    dve[0].author = "Tolkien";
    dve[0].age = "1932";

    std::cout << "Hello World!\n";
}

