#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book{ 
    public:
        Book(string b_name, string b_author, int b_year, int b_number, bool b_available){ //����������� �����
            name = b_name;
            author = b_author;
            year = b_year;
            number = b_number;
            available = b_available;
        } 
        string getname(); // ���������� �������� �����
        string getAuthor(); //������
        int getYear(); //��� �������
        int getNumber(); //���������� �������� ����� (�� 1 �� 100000)
        bool isAvailable(); //�����������
        void setAvailable(bool available); //������������� �����������
    private:
        string name;
        string author;
        int year;
        int number;
        bool available;
};

#endif