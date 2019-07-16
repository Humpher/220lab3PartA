/*
 * Book.cpp
 *
 *  Created on: Mar 19, 2019
 *      Author: Humpher
 */

#include "Book.hpp"
#include<iostream>
#include<stdlib.h>

using namespace std;

Book::Book(){

}

Book::Book(string first, string last, string book, int year){


	fname = first;
	 lname = last;
	 bname = book;
	 pubYear = year;
	 arr = new int[10];

	 	 for(int i = 0; i<10; i++){

	 		 arr[i] = 0;
	 	 }

	 }


Book::Book(string firstn, string lastn, string bookn, int yearpub, int *array){

	arr = new int[10];
	fname = firstn;
	lname = lastn;
	bname = bookn;
	pubYear = yearpub;

	for(int i = 0; i<10; i++){
		arr[i] = array[i];
	}



}

Book::~Book(){

	cout<<"destroying the average: "<<getAverage()<<endl;
}

double Book::getAverage(){

	double avg = 0;
	double sum = 0;

	for(int i = 0; i<10; i++){

		sum = sum + arr[i];
	}

	avg = sum/10;

	return avg;
}

void Book::printRating(){

	if(getAverage() == 0){

		cout<<"no ratings yet";
	}
	else{
		cout<<"The ratings are: "<<getAverage();
	}
}

void Book::printBooksInfo(){

	cout<<"The books information is: "<<bname<<endl;
	cout<<"The authors information is: "<<"first name:"<<fname<<" "<<"last name:"<<lname<<endl;
	cout<<"The year of publication is: "<<pubYear<<endl;
	cout<<"The average rating is: "<<getAverage()<<endl;
	cout<<endl;

}

int Book::getPublishYear(){

	return pubYear;
}

bool Book::operator <(Book b){

	return (pubYear < b.getPublishYear()) && (b.getPublishYear() > pubYear);

}
