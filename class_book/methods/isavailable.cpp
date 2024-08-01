#include "../book.h"

Book::Book(string name, string author, int year, int number, bool available)
    : name(name), author(author), year(year), number(number), available(available) {}

bool Book::isAvailable(){
    return available;
}