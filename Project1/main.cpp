#include <iostream>
#include "../Library/library.h"
using namespace std;

int main() {
	Book jungleBook = createBook("Jungle book",
		"Rick Riordan",
		1967,
		20.50);

	Book harryPotter = createBook("Harry Potter",
		"G. Rouling",
		1996,
		25.75);

	Book* booksList = new Book[2];

	booksList[0] = jungleBook;
	booksList[1] = harryPotter;

	Library library = {
		"School library",
		booksList,
		2
	};

	printBook(jungleBook);
	cout << endl;
	printLibrary(library);
	cout << endl;
	cout << "Average books price: " << averageBookPrice(library) << endl;
	cout << endl;
	cout << "Oldest book in this library: " << endl;
	cout << endl;
	printBook(oldestBookInLibrary(library));
}