#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book{ 
    public:
        Book(std::string name, std::string author, int year, int number, bool available); //����������� �����
        std::string getname(); // ���������� �������� �����
        std::string getAuthor(); //������
        int getYear(); //��� �������
        int getNumber(); //���������� �������� ����� (�� 1 �� 100000)
        bool isAvailable(); //�����������
        void setAvailable(bool available); //������������� �����������
    private:
        std::string name;
        std::string author;
        int year;
        int number;
        bool available;
};

#endif