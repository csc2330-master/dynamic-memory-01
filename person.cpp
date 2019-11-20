#include "person.h"

#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;
using std::istream;

Person::Person(){
	_name = "";
	_age = 0;
}
Person::Person(const string& name, int age){
	_name = name;
	_age = age;
}
void Person::Read(istream& input){
	input >> _name >> _age;
}
string Person::ToString()const{
	stringstream ss;
	ss << "{name: " << _name << ", age: " << _age << "}";
	return ss.str();
}
void Person::Birthday(){
	_age++;
}

