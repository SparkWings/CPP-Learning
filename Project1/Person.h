#pragma once
#include <string>

namespace gender 
{
	enum type { MALE = 0, FEMALE = 1 };
}

using namespace std;

class Person
{

private: 
	int age;
	string name;
	string ssn;
	gender::type sex;

public:

	string getName() { return name; }

	string getSSN() { return ssn; }

	gender::type getGender() { return sex; }

	int getAge() { return age; }

	void setName(string arg) { name = arg; }

	void setAge(int arg) { age = arg; }

	void setSSN(string arg) { ssn = arg; }

	void setGender(gender::type arg) { sex = arg; }

};

