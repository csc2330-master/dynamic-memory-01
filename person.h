#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using std::string;
using std::istream;

class Person{
	string _name;
	int _age;
public:
	Person();
	Person(const string&, int);
	void Read(istream&);
	string ToString()const;
	void Birthday();
};

#endif
