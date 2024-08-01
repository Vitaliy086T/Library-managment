#include "../book.h"

Book::Book(std::string name, std::string author, int year, int number, bool available)
    : name(name), author(author), year(year), number(number), available(available) {}
