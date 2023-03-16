#pragma once
#include<iostream>
using namespace std;

/*¬ ранее созданный класс String добавьте перегрузку [], (),

Х	 () Ч ищет символ в строке, если символ есть возвращает индекс, если нет Ц1.
*/
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
	friend ostream& operator<<(ostream& out, String& s) {
		for (int i = 0; i <s.size; ++i)
			out << s.str[i];
		return out;
	}
	char& operator[](int index) { return str[index]; }

	int operator()(String& s,char c) {
		int q = -1;
		for (int i = 0; i < s.size; i++)
		{
			if (s.str[i] == c) {
				return i;
			}
			
		}
		return q;
	}

	int length(String& s) {
		size = strlen(s.str);
		return size;
	}

};

