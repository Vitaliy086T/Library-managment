#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
using namespace std;

class Book{ 
    public:
        Book(string name, string author, int year, int number, bool Available); //����������� �����
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
        bool Available;
};

#endif