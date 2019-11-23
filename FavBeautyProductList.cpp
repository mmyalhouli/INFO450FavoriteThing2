#include <iostream>
#include <string>
#include <fstream>
#include "Product.h"
#include "productList.h"
using namespace std;


productList::productList(){
	
	lastLocation = 0;
	maxListsize = 100;
	
}
int productList::WriteFile(string p)
{	//** open file in append mode
	ofstream out;
	out.open(p, ios::app);

	if (!out)
	{
		cout << "ERRROR - file open failed!" << endl;
		return -1;
	}
	else
	{
		cout << "File created !! " << endl;

		for (int i = 0; i < lastLocation; i++)
		{
			out << mylist[i].getName() << ",";
			out << mylist[i].getPrice() << ",";
			out << mylist[i].getBrand() << ",";
			out << mylist[i].getArt_no() << ",";
			out << mylist[i].getPro_code() << "," << endl;
		}
	}
	out.close();
	return 0;

}
void productList::showProList(){
	
	for (int x = 0; x < lastLocation; x++){
		cout << "Beauty product no:   " << x+1 << " is:" << endl;
		mylist[x];
//		
	}// ** end for loop
}
int productList::searchPro(string s){
	for (int x = 0; x < lastLocation; x++){
		if (mylist[x].getPro_code() == s)
			return 0;
	}
	return 1;
}


void productList::AddinList()
{
	if (lastLocation < maxListsize)
	{
		mylist[lastLocation].user_input();
	lastLocation++;
}
	else
		cout << " ERROR : you List Is Full." << endl;
	

}

int productList::readFile(string p){
	// ** temporary data types 
	string name1;
	string brand1;
	string price1;
	string artical_no1;
	string pro_code1;
	
		ifstream input;
		input.open(p, ios::in);

		if (!input)
		{
			cout << "ERROR: unable to open" << endl;
			return -1;
		}
		string stringFromFile;

		while (!input.eof())
		{
			getline(input, stringFromFile, ','); // reading from the file till end 

			// if file is empty...

			if (stringFromFile.length() == 0){
				cout << "ERROR : File is empty..";
			}// end if

			else if (stringFromFile.length() >= 1)
			{
				name1 = stringFromFile;
				getline(input, brand1, ',');
				getline(input, price1, ',');
				getline(input, artical_no1 , ',');
				getline(input, pro_code1, ',');

				mylist[lastLocation].setName(name1);
				mylist[lastLocation].setBrand(brand1);
				mylist[lastLocation].setPrice(price1);
				mylist[lastLocation].setArt_no(artical_no1);
				mylist[lastLocation].setPro_code(pro_code1);

				lastLocation++;
			}// end else-if...
		}
		cout << "coppied data" << endl;

		input.close();
		return 0;
	}


