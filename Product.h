#pragma once
#include <string>
#include <iostream>
#include "productList.h"
#include "Product.h"

using namespace std;

class Product{

	// **five string type private attributes
private:

	string name;
	string brand;
	string price;
	string artical_no;
	string pro_code;

public:
	// ** default constructor 
	Product();

	//** overloaded constructor
	Product(string n, string b, string p, string a_n, string p_c);

	//** getters & setters
	string getName();
	string getBrand();
	string getPrice();
	string getArt_no();
	string getPro_code();

	void setName(string n);
	void setBrand(string b);
	void setPrice(string p);
	void setArt_no(string a);
	void setPro_code(string s);

	//** methods

	//** friend function
	friend ostream & operator << (ostream & O_P, Product & fav_p);

	//** for get input from user
	void user_input();

	
		
};// ** End of class

