
#include <iostream>
#include <iterator> // ostream_iterator
#include <cstring>
#include <cctype>

using namespace std;

//
//void print(int num)
//{
//    cout << num << endl;
//}
//
//void print(double num)
//{
//    cout << num << endl;
//}
//
//void print(Fraction fraction)
//{
//    cout << fraction.numerator_ << "/" << fraction.denominator_ << endl;
//}
//
//void print(const char* wsk)
//{
//    cout << wsk << endl;
//}
//
//void print(const NotCopyableType &ncpt)
//{
//    cout << ncpt.number_ << endl;
//}
//
//void print(const int* table, int size)
//{
//    for (int i=0; i<size; i++){
//        cout << table[i];
//        if (i!=size-1){
//            cout << ", ";
//        }
//    }
//    cout << endl;
//}


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
int main(){
    const int arrayOfNumbers[] = {967, 972, 979, 981, 985, 992, 995};
    constexpr size_t numbersCount [[maybe_unused]] = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
    print(arrayOfNumbers, numbersCount);
}

