#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(int argc, char* argv[]){
	// Always initialize your pointers!
	int dummy;
	int* ptr = nullptr;
	
	int data[4] = {5, 3, 7, 1};

	ptr = data;

	cout << ptr << endl;
	cin >> dummy;
	cout << *ptr << endl;
	cin >> dummy;
	cout << &ptr << endl;
	cin >> dummy;
	cout << &ptr[0] << endl;


	return 0;
}

