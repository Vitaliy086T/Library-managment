#include "../book.h"

Book::Book(string name, string author, int year, int number, bool available)
    : name(name), author(author), year(year), number(number), available(available){}

void Book::setAvailable(bool available){
    this -> available = available;
}