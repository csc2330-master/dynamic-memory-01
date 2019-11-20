#include "point.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(int argc, char* argv[]){
	Point p(1, 2);
	cout << "&p = " << &p << endl;
	cout << p.ToString() << endl;

	Point* ptr = nullptr;
	cout << "&ptr = " << &ptr << endl;

	ptr = new Point();
	cout << "ptr = " << ptr << endl;
	cout << (*ptr).ToString() << endl;
	cout << ptr->ToString() << endl;



	// Since ptr is not pointing to an array
	// the delete does not need []
	delete ptr;
	return 0;
}

