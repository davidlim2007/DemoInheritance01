// DemoInheritance01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Base.h"
#include "Person.h"
#include <string.h>
#include <iostream>

void DoTest()
{
	Derived01 derived01;

	std::cout << derived01.szBaseString << std::endl;
	std::cout << ((Base)derived01).szCommonString << std::endl;
	std::cout << (static_cast<Base>(derived01)).szCommonString << std::endl;
	std::cout << derived01.Base::szCommonString << std::endl;
	std::cout << derived01.szCommonString << std::endl;
	std::cout << derived01.Derived01::szCommonString << std::endl;

	strcpy(derived01.szBaseString, "CHANGED");
	std::cout << derived01.szBaseString << std::endl;

	Base& derived_base = static_cast<Base&>(derived01);
	strcpy(derived_base.szBaseString, "CHANGED01");
	std::cout << derived01.szBaseString << std::endl;

	strcpy(derived01.Base::szBaseString, "CHANGED02");
	std::cout << derived01.szBaseString << std::endl;

	strcpy(derived_base.szCommonString, "CHANGEDCBASE");
	std::cout << derived01.Base::szCommonString << std::endl;
	
	strcpy(derived01.Base::szCommonString, "CHANGEDCBASE1");
	std::cout << derived01.Base::szCommonString << std::endl;
	
	strcpy(derived01.szCommonString, "CHANGEDCDER");
	std::cout << derived01.szCommonString << std::endl;

	ClassWithEverything everything;

	strcpy(everything.szCommonString, "CHANGED");
	std::cout << everything.szCommonString << std::endl;

	strcpy(everything.Derived01::szCommonString, "CHANGED1");
	std::cout << everything.Derived01::szCommonString << std::endl;

	strcpy(everything.Base::szCommonString, "CHANGED2");
	std::cout << everything.Base::szCommonString << std::endl;

	strcpy(everything.Base::szBaseString, "CHANGED3");
	std::cout << everything.Base::szBaseString << std::endl;

	strcpy(everything.Derived02::Base::szBaseString, "CHANGED4");
	std::cout << everything.Derived02::Base::szBaseString << std::endl;

	PartTimeStudent parttimestudent("John", 23, "NTU", "Seven-Eleven");
}

void DoTest2()
{
	Derived01 derived01;

	derived01.BaseMethod();

	derived01.::Base::BaseMethod();

	derived01.CommonMethod();

	ClassWithEverything everything;

	everything.::Base::BaseMethod();
	everything.::Derived01::Base::BaseMethod();
	everything.::Derived02::Base::BaseMethod();
	
	everything.CommonMethod();
	everything.Base::CommonMethod();
	everything.Derived01::CommonMethod();
	everything.Derived02::CommonMethod();
}

void DoTest3()
{
	Base base1;
	Base base2;
	base2.iBaseInt = 2;

	base1.BaseMethod();
	base2.BaseMethod();
}

int main()
{
	DoTest();
	DoTest2();
	DoTest3();

    return 0;
}

