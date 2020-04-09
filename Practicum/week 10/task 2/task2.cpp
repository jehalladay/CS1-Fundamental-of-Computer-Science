#include <iostream>
#include <iomanip>
#include <cstring>


using namespace std;

struct BookInfo {
    char title[50];
    char author[30];
    double price;
};


int main() {
    BookInfo book1, book2;
    strcpy(book1.author, "Dan Brown");
    strcpy(book1.title, "The Da Vinci Code");
    book1.price  = 24.20;

    cout << "Book#1 Title:\t" << book1.title << endl;
    cout << "Book#1 Author:\t" << book1.author << endl;
    cout << "Book#1 Price:\t" << book1.price << endl << endl;
    
    strcpy(book2.title, book1.title);
    strcpy(book2.author, book1.author);
    book2.price = book1.price;
    
    cout << "Book#2 Title:\t" << book1.title << endl;
    cout << "Book#2 Author:\t" << book1.author << endl;
    cout << "Book#2 Price:\t" << book1.price << endl;
    
    return 0;
}