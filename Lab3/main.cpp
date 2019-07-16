/*
 * main.cpp
 *
 *  Created on: Mar 19, 2019
 *      Author: Humpher
 */

#include"Book.hpp"
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){


		int arrRatings1[10] = {10,9,8,7,6,5,4,3,2,1};
		int arrRatings2[10] = {10,9,0,0,12,15,18,20,1};
		int arrRatings3[10] = {0,9,14,17,11,2,18,18,18,18};
		int arrRatings4[10] = {11,19,18,7,12,15,14,2,2,16};
		int arrRatings5[10] = {0,0,0,0,0,0,0,0,0,0};
		int arrRatings6[10] = {10,15,20,20,18,12,11,19,10,20};

	Book book[5]= {Book("Dan","Michel","Hello Bye",1992,arrRatings1),
					Book("Mike","Miller","Okay",2009,arrRatings2),
					Book("Bill","Brady","The Game",2019,arrRatings3),
					Book("Lebron","James","GOAT",1953,arrRatings4),
					Book("Serena","Williams","Greatest",2007,arrRatings5)};



	int greatestYear = book[0].getPublishYear();

		for(int i = 0; i<5; i++){

			if(greatestYear < book[i].getPublishYear()){

				greatestYear = book[i].getPublishYear();
			}
		}

		cout<<"The greatest book based on the year is:"<<greatestYear<<endl<<endl;



		/*for(int i = 0; i<5; i++){

			if(book[i].getPublishYear() < book[i++].getPublishYear()){
				cout<<"The greatest is: "<<book[i++].getPublishYear();
			}

			else{
				cout<<"The greatest is: "<<book[i].getPublishYear();
			}
		}*/


		Book *obj = new Book("Matt","Moose","cediss",2008,arrRatings6);
			obj->printBooksInfo();

			delete obj;

		Book *mybook = new Book[2]{{"Matt","Booker","BALE",2009,arrRatings1}, {"Jason","Match","HALO BEGIN", 2001,arrRatings4}};

			mybook[0].printBooksInfo();
			mybook[1].printBooksInfo();


		delete [] mybook;


	return 0;
}






