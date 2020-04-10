#include <iostream>
#include <iomanip>
#include <cstring>


using namespace std;

struct BookInfo {
    char title[50];
    char author[30];
    double price;
};

void printBookInfo(BookInfo);
BookInfo reduceBookPrice(BookInfo, double);
bool testBookEquality(BookInfo, BookInfo);


int main() {
    BookInfo book1, book2;
    strcpy(book1.author, "Dan Brown");
    strcpy(book1.title, "The Da Vinci Code");
    book1.price  = 24.20;
    
    strcpy(book2.title, book1.title);
    strcpy(book2.author, book1.author);

    book2.price = book1.price;

    printBookInfo(book1);
    printBookInfo(book2);

    if (testBookEquality(book1, book2)) {
        cout << "Books are the same" << endl << endl;
    } else {
        cout << "Books are not the same" << endl << endl;
    };

    book1 = reduceBookPrice(book1, 12.20);

    printBookInfo(book1);
    printBookInfo(book2);
    
    if (testBookEquality(book1, book2)) {
        cout << "Books are the same" << endl << endl;
    } else {
        cout << "Books are not the same" << endl << endl;
    };

    return 0;
};


void printBookInfo(BookInfo book){
    cout << "Title:\t" << book.title << endl;
    cout << "Author:\t" << book.author << endl;
    cout << "Price:\t" << fixed << setprecision(2) << book.price << endl << endl;
    
};


BookInfo reduceBookPrice(BookInfo book, double reduction) {
    book.price = book.price - reduction;
    return book;
};


bool testBookEquality(BookInfo book1, BookInfo book2) {

    if (strcmp(book1.title, book2.title) == 0 && strcmp(book1.author, book2.author) == 0 && book1.price == book2.price) {
        return true;
    }
    return false;
};