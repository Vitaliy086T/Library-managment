#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
using namespace std;

class Book{ 
    public:
        Book(string name, string author, int year, int number, bool Available); //конструктор книги
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
        bool Available;
};

#endif