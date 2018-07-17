#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <string.h>

#include "EmployeeRecord.h"
#include "Store.h"
 
using namespace std;

int main() {

	CustomerList *StoreList;
	Store *myStore;

	/*
	EmployeeRecord *ptr1 = new EmployeeRecord(159114, "Ran", "Crump", 69, 10.00);

	ptr1->printRecord();
	*/

	StoreList = new CustomerList;

	Store *ptr1 = new Store(59, "Friendly", "2402 Viking", "Jasper", "Al", "35501");
	Store *ptr2 = new Store(198, "ZedHead", "225 Georgia Lane", "Jasper", "Al", "35504");
	Store *ptr3 = new Store(46, "Ranner", "6500 Walden", "Huntsville", "Al", "35806");

	StoreList->addStore(ptr1);
	StoreList->addStore(ptr2);
	StoreList->addStore(ptr3);

	StoreList->printStoresInfo();

	cout << "\nChanging Fridendly to FAS" << endl;

	StoreList->updateStore(50, "FAS", "2402 Viking", "Jasper", "Al", "35501");

	StoreList->printStoresInfo();

	system("pause");
	return 0;
}