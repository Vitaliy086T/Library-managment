#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book{ 
    public:
        Book(string name, string author, int year, int number, bool available); //����������� �����
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