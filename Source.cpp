#include <iostream>
#include <string>
#include "Product.h"
#include "productList.h"

using namespace std;

int main(){
	//** data members
	int input_choice;
	string file_path;
	productList proList;
	do{
		cout << "Please Enter  your choice ! " << endl;
		cout << "-------------------------------" << endl;
		cout << "Press 1 for Add new Product " << endl;
		cout << "Press 2 for Show all Products " << endl;
		cout << "Press 3 for Reading from File " << endl;
		cout << "Press 4 for Save in File " << endl;
		cout << "Press 5 for Exit     " << endl;
		cin >> input_choice;
		
		if (input_choice==1)
		{
			proList.AddinList();
		}// ** end choice
		if (input_choice == 2)
		{
			proList.showProList();

		}
		if (input_choice == 3)
		{
			cout << " Enter Path of file, you want to read :" << endl;
			cin >> file_path;
			proList.readFile(file_path);
		}

		if (input_choice == 4)
		{
			cout << " Enter Path of file, you want to write : " << endl;
			cin >> file_path;
			proList.WriteFile(file_path);

		}
	} while (!(input_choice == 5));
	
	system("pause");// ** Wait for keypress
	return 0;
}// ** End of Main function here