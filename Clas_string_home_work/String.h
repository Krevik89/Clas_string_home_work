#pragma once
#include<iostream>
using namespace std;
class String
{
	char* str;
	size_t size;
public:
	
	String(size_t s) : str{ new char[s] }, size{ s } {
		strcpy_s(str, s, "");
	}
	
	String(const char* strP) : String{ strlen(strP) + 1 } {
		strcpy_s(str, strlen(strP) + 1, strP);
	}

	String() : String{ 80 } {}

	String(const String& object) :
		size{ object.size }, str{ new char[object.size] } {
		strcpy_s(str, size, object.str);
	}

	~String() {
		delete[]str;
	}

	void Print();
	void Init();

};

