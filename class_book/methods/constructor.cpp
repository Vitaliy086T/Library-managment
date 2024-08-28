#include "../book.h"

    Book::Book(string name, string author, int year, int number, bool available) {
    this->name = name;
    this->author = author;
    this->year = year;
    this->number = number;
    this->available = available;
}
