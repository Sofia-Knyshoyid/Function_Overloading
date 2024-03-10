#include <iostream>
#include <iterator> // ostream_iterator
#include <cstring>
#include <cctype>

using namespace std;

#include "printing.h"


#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
    #warning "Funkcje sa do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
    #pragma message ("Funkcje sa do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif

void print(int num)
{
    cout << num << endl;
}
