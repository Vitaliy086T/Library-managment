#include "../library.h"

void Library::setBookAvailable(int number, bool available){
    for (auto& book : books){
        if(book.getNumber() == number){
            book.setAvailable(available);
            break;
        }
    }
}

