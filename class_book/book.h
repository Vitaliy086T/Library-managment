#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book{ 
    public:
        Book(string b_name, string b_author, int b_year, int b_number, bool b_available){ //конструктор книги
            name = b_name;
            author = b_author;
            year = b_year;
            number = b_number;
            available = b_available;
        } 
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