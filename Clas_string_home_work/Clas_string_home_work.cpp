#include <iostream>
#include "String.h"

using namespace std;

int main()
{
   /* String s1;
    s1.Print();
    s1.Init();
    s1.Print();

    String s2{ "Hello World" };
    s2.Print();
    s2.Init();
    s2.Print();

    String s3{ s1 };
    s3.Print();
    s3.Init();
    s3.Print();*/

    String s{"The Best C++"};
    
    //[] — возвращает элемент по указанному индексу;
    char tmp = s[2];
    cout << tmp<<endl;

    //Преобразование к int возвращает длину строки.
    int l = s.length(s);
    cout << l << endl;
  
    //() — ищет символ в строке, если символ есть возвращает индекс, если нет –1.
    int index = s(s, 'h');
    cout << index;
    
}