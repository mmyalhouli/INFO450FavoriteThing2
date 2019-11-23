#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Product.h"
#include "productList.h"

using namespace std;

Product::Product(){
	name="";
	brand = "";
	price = "";
	artical_no = "";
	pro_code = "";
}

Product::Product(string n, string b, string p, string a_n, string p_c){
	name = n;
	brand = b;
	price = p;
	artical_no = a_n;
	pro_code = p_c;
}
// ** getter and setter for name
void Product::setName(string n){
	name = n;
}
string Product::getName(){
	return name;
}

// ** getter and setter for brand
void Product::setBrand(string b){
	brand= b;
}
string Product::getBrand(){
	return brand;
}

// ** getter and setter for price
void Product::setPrice(string p){
	price = p;
}
string Product::getPrice(){
	return price;
}

// ** getter and setter for Artical_no
void Product::setArt_no(string a_n){
	artical_no = a_n;
}
string Product::getArt_no(){
	return artical_no;
}

// ** getter and setter for pro_code
void Product::setPro_code(string p_n){
	pro_code = p_n;
}
string Product::getPro_code(){
	return pro_code;
}


// ** friend function
	 ostream & operator << (ostream & O_P, Product & fav_p)
	{
		O_P << endl;
		O_P << " ***** " << fav_p.getName() << " ***** " << endl;
		O_P << "----------------------------------------"<< endl;
		O_P << fav_p.getName() << " Brand :      "  << fav_p.getBrand()   << endl;
		O_P << fav_p.getName() << " Price :       " << fav_p.getPrice()   << endl;
		O_P << fav_p.getName() << " Artical no :  " << fav_p.getArt_no()  << endl;
		O_P << fav_p.getName() << " Product Code: " << fav_p.getPro_code() << endl;
		return O_P;
	}

	 void Product::user_input(){
		 string input;
		 Product p; productList proList;
		 cout << "Enter name of product " << endl;
		 getline(cin, name);
		 
		 cout << "Enter price of product " << endl;
		 getline(cin, price);
		 
		 cout << "Enter brand of product " << endl;
		 getline(cin, brand);
		 
		 cout << "Enter Artical no of product " << endl;
		 getline(cin, artical_no);
		
		 cout << "Enter product code of product " << endl;
		 getline(cin, pro_code);

		 while (true)
		 {
			 if (proList.searchPro(input) == 1){
				 break;
			 }
			 else
			 {
				 cout << "This product is already Exists, Enter new one " << endl;
				 getline(cin, pro_code);
			 }
			 
		 }//** end while
	 }