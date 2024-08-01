#include "../library.h"

Book* Library::findBookByName(const string& name){
    for(auto& book : books){
        if (book.getname() == name){
            return &book;
        }
    }
    return nullptr;
}