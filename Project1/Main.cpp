#include "Main.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;


Main::Main()
{
}

int main() {

	string sname;
	string vssn;
	int vage;
	int sexInt;
	gender::type vsex;

	string stop;

	std:cout << "Hello! Welcome to the US DoD Person Database Entry System." << endl;
	std::cout << "Please enter the person's information as it is requested." << endl;

	std::cout << "Please enter the person's FULL NAME" << endl;
	std::cin >> sname;

	std::cout << "Please enter the person's AGE" << endl;
	std::cin >> vage;

	std::cout << "Please enter the person's SSN, separated by '-' (Example: 123-45-6789)" << endl;
	std::cin >> vssn;

	std::cout << "Please enter the person's gender/sex. USE 0 FOR MALE AND 1 FOR FEMALE" << endl;
	std::cin >> sexInt;

	if (sexInt == 0) {
		vsex = gender::MALE;
	}
	else {
		vsex = gender::FEMALE;
	}

	Person p1;
	p1.setName(sname);
	p1.setAge(vage);
	p1.setSSN(vssn);
	p1.setGender(vsex);

	std::cout << "" << endl;
	std::cout << "=========" << p1.getName() << "=========" << endl;
	std::cout << "Age: " << p1.getAge() << endl;
	std::cout << "SSN: " << p1.getSSN() << endl;
	std::cout << "Sex: " << p1.getGender() << endl;
	std::cout << "========================" << endl;

	std::cin >> stop;

	return 0;
}


Main::~Main()
{
}
