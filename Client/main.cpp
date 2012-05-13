#include <cstdlib>
#if defined(WIN32) || defined(_WIN32)
#pragma comment(lib, "pgsql.lib")
#endif
#include "activepg.h"
int main()
{
	pgConnection bdConnection;
	data a;

	// test author
	pgAuthor author(bdConnection.getDriver());
	vector<Author> authors = author.all();
	vector<Author>::iterator i_author;
	if(authors.size())
		authors[0].printHeader();
	for( i_author = authors.begin(); i_author != authors.end(); i_author++)
		i_author->print();

	// test book
	pgBook book(bdConnection.getDriver());
	vector<Book> books = book.all();
	vector<Book>::iterator i_book;
	if(books.size())
		books[0].printHeader();
	for( i_book = books.begin(); i_book != books.end(); i_book++)
		i_book->print();

	// test area
	pgArea area(bdConnection.getDriver());
	vector<Area> areas = area.all();
	vector<Area>::iterator i_area;
	if(areas.size())
		areas[0].printHeader();
	for( i_area = areas.begin(); i_area != areas.end(); i_area++)
		i_area->print();

	// test instance
	pgInstance instance(bdConnection.getDriver());
	vector<Instance> instances = instance.all();
	vector<Instance>::iterator i_instance;
	if(instances.size())
		instances[0].printHeader();
	for( i_instance = instances.begin(); i_instance != instances.end(); i_instance++)
		i_instance->print();

	return 0;
}
