#include "stdafx.h"
#include "Base.h"
#include <iostream>


Base::Base() :
	szBaseString("______BASE_____"),
	iBaseInt(0),
	szCommonString("__COMMONBASE___")
{
}


Base::~Base()
{
}


void Base::BaseMethod()
{
	std::cout << "Base::BaseMethod()" << std::endl;
}



void Base::CommonMethod()
{
	std::cout << "Base::CommonMethod()" << std::endl;
}






Derived01::Derived01() :
	szDerived01String("___DERIVED01___"),
	iDerived01Int(1),
	szCommonString("COMMONDERIVED01")
{
}


Derived01::~Derived01()
{
}



void Derived01::CommonMethod()
{
	// ::Base::CommonMethod();
	std::cout << "Derived01::CommonMethod()" << std::endl;
}





Derived02::Derived02() :
	szDerived02String("___DERIVED02___"),
	iDerived02Int(2),
	szCommonString("COMMONDERIVED02")
{
}


Derived02::~Derived02()
{
}



void Derived02::CommonMethod()
{
	std::cout << "Derived02::CommonMethod()" << std::endl;
}





ClassWithEverything::ClassWithEverything()
{
}


ClassWithEverything::~ClassWithEverything()
{
}

void ClassWithEverything::CommonMethod()
{
	std::cout << "ClassWithEverything::CommonMethod()" << std::endl;
}