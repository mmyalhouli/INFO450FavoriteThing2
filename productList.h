#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include "productList.h"
#include "Product.h"
using namespace std;

class productList{
private:

	Product mylist[100];
	int lastLocation;
	int maxListsize;

public:
	//** default constructor
	productList();

	//** required methods
	void showProList();
	int readFile(string path);
	int WriteFile(string path);
	void AddinList();

	//** for searching in list
	int searchPro(string s);

}; // ** end of class here