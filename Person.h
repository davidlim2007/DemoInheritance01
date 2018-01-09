#pragma once

class Person
{
public:
	Person(char* szName, int age);
	virtual ~Person();

	char szName[16];
	int  age;
};

class Student : virtual public Person
{
public :
	Student(char* szName, int age, char* szSchool);
	virtual ~Student();

	char szSchool[16];
};

class Employee : virtual public Person
{
public :
	Employee(char* szName, int age, char* szEmployer);
	virtual ~Employee();

	char szEmployer[16];
};

class PartTimeStudent : virtual public Person,
	virtual public Student,
	virtual public Employee
{
public :
	PartTimeStudent(char* szName, int age, char* szSchool, char* szEmployer);
	virtual ~PartTimeStudent();
};

