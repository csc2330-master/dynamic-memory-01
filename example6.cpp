#include "person.h"

#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char* argv[]){
	int maxPeople = 0, menuOption, currentPeople = 0;
	cout << "How many people you need: ";
	cin >> maxPeople;
	
	Person* people = new Person[maxPeople];
	do{
		cout << "1. Add Person" << endl;
		cout << "2. List People" << endl;
		cout << "3. Exit" << endl;
		cin >> menuOption;
		if (menuOption == 1){
			if (currentPeople < maxPeople){
				cout << "Please enter name and age: "
				     << endl;
				people[currentPeople].Read(cin);
				currentPeople++;
			}else
				cerr << "The list is full" << endl;
		}else if (menuOption == 2){
			for (int i=0; i<currentPeople; i++)
				cout << people[i].ToString() << endl;
		}
		
	}while(menuOption != 3);
	
	delete[] people;

	return 0;
}
