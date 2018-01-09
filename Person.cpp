#include "stdafx.h"
#include "Person.h"
#include <string>
#include <iostream>

Person::Person(char* szName, int age)
{
	memset((void*)(this->szName), 0, sizeof(this->szName));
	strcpy(this->szName, szName);
	this->age = age;

	std::cout << "Person constructor." << std::endl;
}



Person::~Person()
{
}



Student::Student(char* szName, int age, char* szSchool) :
	Person(szName, age)
{
	memset((void*)(this->szSchool), 0, sizeof(this->szSchool));
	strcpy(this->szSchool, szSchool);

	std::cout << "Student constructor." << std::endl;
}



Student::~Student()
{
}



Employee::Employee(char* szName, int age, char* szEmployer) :
	Person(szName, age)
{
	memset((void*)(this->szEmployer), 0, sizeof(this->szEmployer));
	strcpy(this->szEmployer, szEmployer);

	std::cout << "Employee constructor." << std::endl;
}


Employee::~Employee()
{
}



PartTimeStudent::PartTimeStudent(char* szName, int age, char* szSchool, char* szEmployer) :
	Person(szName, age),
	Student(szName, age, szSchool),
	Employee(szName, age, szEmployer)
{
	std::cout << "Part-time student constructor." << std::endl;
}


PartTimeStudent::~PartTimeStudent()
{
}