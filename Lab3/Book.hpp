/*
 * Book.hpp
 *
 *  Created on: Mar 19, 2019
 *      Author: Humpher
 */

#include<iostream>
#include<stdlib.h>

using namespace std;

#ifndef BOOK_HPP_
#define BOOK_HPP_

class Book{

	string fname;
	string lname;
	int *arr;
	string bname;
	int pubYear;

public:
	Book();
	Book(string first, string last, string book, int year);
	Book(string firstn, string lastn, string bookn, int yearpub, int *array);
	~Book();
	double getAverage();
	void printRating();
	void printBooksInfo();
	int getPublishYear();
	bool operator<(Book b);
};


#endif /* BOOK_HPP_ */
