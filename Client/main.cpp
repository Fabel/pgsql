#include <cstdlib>
#if defined(WIN32) || defined(_WIN32)
	#pragma comment(lib, "pgsql.lib")
#endif
#include "activepg.h"
int main()
{
	pgConnection bdConnection;
	pgAuthor author(bdConnection.getDriver());
	// pgBook books(bdConnection.getDriver());
	data a;
	//test data
	vector<Author> authors = author.all();
	vector<Author>::iterator iterator;
	authors[0].printHeader();
	for( iterator = authors.begin(); iterator != authors.end(); iterator++)
		iterator->print();
	// books.last().printHeader();
	return 0;
}
