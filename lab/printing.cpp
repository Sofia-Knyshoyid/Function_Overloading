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

void print(double num)
{
    cout << num << endl;
}

void print(Fraction fraction)
{
    cout << fraction.numerator_ << "/" << fraction.denominator_ << endl;
}

void print(const char* wsk)
{
    cout << wsk << endl;
}

void print(const NotCopyableType &ncpt)
{
    cout << ncpt.number_ << endl;
}

void print(const int* table, int size)
{
    for (int i=0; i<size; i++){
        cout << table[i];
        if (i!=size-1){
            cout << ", ";
        }
    }
    cout << endl;
}