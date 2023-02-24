#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String s1;
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
    s3.Print();
}