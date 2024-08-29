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
        }; //���������� �����
        void deleteBook(int number); //�������� ����� �� ����������� ������
        Book* findBookByName(const string& name); // ����� ��� ������ ����� �� ��������
        vector <Book> getBooks(); // ����� ��� ��������� ������ ���� ����
        void setBookAvailable(int number, bool available);
    private: 
        vector <Book> books;
};

#endif