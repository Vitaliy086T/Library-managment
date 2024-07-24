#ifndef BOOK.H
#define BOOK.H
#include <vector>
#include <iostream>
#include "../class_library/library.h"
using namespace std;


class Book : public Library{
    public:
        void addBook();
        void deleteBook();
        void searchBook();
        void allbooks();
    private: 
        vector <Library> books;
};

#endif