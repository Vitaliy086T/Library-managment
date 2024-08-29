#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include <iostream>
#include "../class_book/book.h"
using namespace std;

class Library{
    public:
        void addBook(const Book& book){
            books.push_back(book);
        }; //Добавление книги
        void deleteBook(int number); //Удаление книги по уникальному номеру
        Book* findBookByName(const string& name); // метод для поиска книги по названию
        vector <Book> getBooks(); // метод для получения списка всех книг
        void setBookAvailable(int number, bool available);
    private: 
        vector <Book> books;
};

#endif