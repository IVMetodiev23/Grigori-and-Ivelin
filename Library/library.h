#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    double price;
};
struct Library {
    string name;
    Book* books;
    int count;
};

Book createBook(string title, string author, int year, double price);
void printBook(Book book);
void printLibrary(Library lib);
double averageBookPrice(Library lib);
Book oldestBookInLibrary(Library lib);