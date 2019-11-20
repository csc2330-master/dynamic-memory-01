#include "point.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(int argc, char* argv[]){
	Point* myPoints = nullptr;
	int size;
	cout << "How many points you need: ";
	cin >> size;
	myPoints = new Point[size];
	for (int i=0; i<size; i++)
		cout << myPoints[i].ToString() << endl;

	for (int i=0; i<size; i++)
		myPoints[i].Read(cin);
	
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++)
			cout << myPoints[i].Distance(myPoints[j]) << "\t";
		cout << endl;
	}
	delete[] myPoints;
	return 0;
}

