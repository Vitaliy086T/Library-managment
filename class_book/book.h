#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book{ 
    public:
        Book(string name, string author, int year, int number, bool available); //конструктор книги
        string getname(); // возвращает название книги
        string getAuthor(); //автора
        int getYear(); //год издания
        int getNumber(); //уникальный серийный номер (от 1 до 100000)
        bool isAvailable(); //доступность
        void setAvailable(bool available); //устанавливает доступность
    private:
        string name;
        string author;
        int year;
        int number;
        bool available;
};

#endif