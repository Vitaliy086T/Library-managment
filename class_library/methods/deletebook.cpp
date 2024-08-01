#include "../library.h"

void Library::deleteBook(int number){
    for(auto it = books.begin(); it != books.end(); ++it){
        if(it -> getNumber() == number){
            books.erase(it);
            break;
        }
    }
}