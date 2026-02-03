#include <iostream>
#include <string>
#pragma once
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    double price;
};
struct Library 
{
    string name;
    Book* books;
    int count;
};