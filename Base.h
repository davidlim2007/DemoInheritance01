#pragma once

class Base
{
public:
	Base();
	virtual ~Base();

	char szBaseString[16];
	int  iBaseInt;
	char szCommonString[16];

	void BaseMethod();
	void CommonMethod();
};





class Derived01 : public Base
{
public:
	Derived01();
	virtual ~Derived01();

	char szDerived01String[16];
	int  iDerived01Int;
	char szCommonString[16];

	void CommonMethod();
};





class Derived02 : public Base
{
public:
	Derived02();
	virtual ~Derived02();

	char szDerived02String[16];
	int  iDerived02Int;
	char szCommonString[16];

	void CommonMethod();
};





class ClassWithEverything : public Base,
	public Derived01,
	public Derived02
{
public:
	ClassWithEverything();
	virtual ~ClassWithEverything();

	char szCommonString[16];

	void CommonMethod();
};







