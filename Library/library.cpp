#include "library.h"

Book createBook(string title, string author, int year, double price) {
	Book* book = new Book;
	book->title = title;
	book->author = author;
	book->year = year;
	book->price = price;

	return *book;
}

void printBook(Book book) {
	cout << "title: " << book.title << endl;
	cout << "author: " << book.author << endl;
	cout << "year: " << book.year << endl;
	cout << "price: " << book.price << endl;
}

void printLibrary(Library lib)
{
	while (lib.books != nullptr)
	{
		cout << "title: " << lib.books->title << endl;
		cout << "author: " << lib.books->author << endl;
		cout << "year: " << lib.books->year << endl;
		cout << "price: " << lib.books->price << endl;
		lib.books++;
	}
}

double averageBookPrice(Library lib)
{
	double sum = 0;
	while (lib.books != nullptr)
	{
		sum += lib.books->price;
		lib.books++;
	}
	return sum / (double)lib.count;
}

Book oldestBookInLibrary(Library lib)
{
	Book oldest = *lib.books;
	while (lib.books != nullptr)
	{
		lib.books++;
		if (lib.books->year < oldest.year)
		{
			oldest = *lib.books;
		}
	}
	return oldest;
}
