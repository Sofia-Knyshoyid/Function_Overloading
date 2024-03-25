# Przejście C -> C++ na przykładzie przeciążania funkcji
C++ umożliwia tworzenie wielu funkcji o tej samej nazwie, różniących się argumentami.

### makra preprocesora
Zadanie zawiera testy automatyczne, które testują czy dana metoda jest zaimplementowana poprawnie.
Treść do wykonania:
-----
1. Zdefiniuj funkcję `print`, która przyjmie liczbę całkowitą, wyświetli ją oraz pustą linię.
   - Po zdefiniowaniu jej usuń makro/zakomentuj: `UNIMPLEMENTED_printWithSingleInteger`
2. Zdefiniuj funkcję `print`, która przyjmie liczbę rzeczywistą, wyświetli ją oraz pustą linię.
   - Po zdefiniowaniu jej usuń makro/zakomentuj: `UNIMPLEMENTED_printWithSingleDouble`
3. Zdefiniuj funkcję `print`, która przyjmie poniższą strukturę Fraction, wyświetli ją (format licznik/mianownik) oraz pustą linię.
   - Osoby zaawansowane mogą przeciążyć operator strumienia
   - Po zdefiniowaniu jej usuń makro/zakomentuj: `UNIMPLEMENTED_printWithSingleFraction`
4. Zdefiniuj funkcję `print`, która przyjmie wskaźnik do tekstu, wyświetli go oraz pustą linię.
   - Po zdefiniowaniu jej usuń makro/zakomentuj: `UNIMPLEMENTED_printWithSingleCString`
5. Zdefiniuj funkcję `print`, która przyjmie obiekt niekopiowalnego typu `NotCopyableType`, oraz wyświetli go (tylko jego liczbę) oraz pustą linię.
   - Osoby zaawansowane mogą przeciążyć operator strumienia
   - Po zdefiniowaniu jej usuń makro/zakomentuj: `UNIMPLEMENTED_printWithSingleNotCopyableObject`
6. Zdefiniuj funkcję `print`, która przyjmie tablicę liczb (jeden argument to tablica, drugi to rozmiar tablicy).
   najlepiej aby liczby byly oddzielone przecinkami i spacjami (", "), ale aby na końcu linii nie było ", "
   - osoby zaawansowane mogą spróbować nie używać pętli jawnie
   - osoby zaawansowane mogą spróbować nie podawać rozmiaru (zakładamy, że argumentem jest tablica o rozmiarze znanym w trakcie kompilacji)
   - Po zdefiniowaniu jej usuń/zakomentuj jedno z makr (zależnie od wyboru): `UNIMPLEMENTED_printWithArrayOfNumbersAndSize` lub `UNIMPLEMENTED_printWithArrayOfNumbersWithoutSize`
7. Zdefiniuj funkcję `print`, która nie przyjmuje żadnych argumentów, a wyświetla jedynie nową linię.
   - Po zdefiniowaniu jej usuń makro/zakomentuj: `UNIMPLEMENTED_printWithoutArguments`
8. [dla zaawansowanych] Zdefiniuj funckje `print`, która przyjmie dowolną ilość dowolnych argumentów dowolnego typu i je wyświetli oddzielając spacją.
   Funkcja powinna być zrobiona na jeden z dwóch sposobów (to obsługują testy):
   - korzystając z makr języka C (wtedy nazwijmy ja `print2`), dla uproszczenia niech to bedzie dowolna ilosc intow
   - korzystając z fold expressions
   Zależnie od wyboru usuń jedno z makr: `UNIMPLEMENTED_printWithAnyArgumentsCStyle` i/lub `UNIMPLEMENTED_printWithAnyArgumentsTemplates`


## Project Structure

    .
    ├── lab1Functions               # directory containing exercises
    |   ├── CMakeLists.txt          # CMake configuration file - the file is to open out project in our IDE
    |   ├── main.cpp                # main file - here we can test out solution manually, but it is not required
    |   ├── printing.h              # file to create class declaration and methods' declaration
    |   ├── printing.cpp            # file to implement methods
    |   ├── tests                   # here are tests for exercise, inner CMakeLists.txt, GTest library used by tests
    │   │   ├── CMakeLists.txt      # iner CMake for tests - it is included by outter CMake
    │   │   ├── printingTests.cpp   # files with tests for exercise
    │   │   └── lib                 # directory containing GTest library
    |   └── README.md               # this file
