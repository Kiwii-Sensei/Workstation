// Week1.cpp : Defines the entry point for the application.
//
#include "Week1.h"
#define usingNamespaces 1

#if usingNamespaces
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello world!" << endl;
	#pragma message("Using namespaces")
	return 0;
}

#else
#include <iostream>

int main()
{
	std::cout << "Hello world!" << std::endl;
	#pragma message("Not using namespaces")
	return 0;
}
#endif

