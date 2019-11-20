#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(int argc, char* argv[]){
	// Always initialize your pointers!
	int  size;
	int* ptr = nullptr;
	
	cout << "&size = " << &size << endl;
	cout << "&ptr  = " << &ptr << endl;

	cout << "How many number you need: ";
	cin >> size;
	ptr = new int[size];
	cout << "ptr = " << ptr << endl;

	for (int i=0; i<size; i++)
		cin >> ptr[i];
	
	for (int i=0; i<size; i++)
		cout << ptr[i] << endl;
	

	delete[] ptr;

	return 0;
}

