#include "class_book/book.h"
#include "class_library/library.h"
#include <iostream>
using namespace std;

int main(){
    Library library;
    Book book1("1984", "G. Orwell", 1949, 3, true);
    Book book2("The Kite Runner", "K. Hosseini", 2003, 2, true);
    Book book3("Martin Eden", "J. London", 1909, 3, true);

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    Book* foundbook = library.findBookByName("Martin Eden");
    if(foundbook){
        cout << "Found book: " << foundbook -> getname() << " by " << foundbook -> getAuthor() << endl;
    }
    else{
        cout << "Book not found" << endl;
    }

    library.setBookAvailable(2, false);

    library.deleteBook(1);

    vector <Book> books = library.getBooks();
    cout << endl << "In our library we have there books: " << endl;
    for(auto& book : books){
        cout << book.getname() << " by " << book.getAuthor() << 
        " Available: " << (book.isAvailable() ? "Yes" : "No")  << endl;
    }
    system("pause");
    return 0;
}

