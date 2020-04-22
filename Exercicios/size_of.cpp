#include <iostream>

using namespace std;

int main() {
    int a = 4;
    char b = 'm';
    double c = 4.33; 
    bool d = true; 

    cout << "O valor da variavel a é: " << a << endl;
    cout << "O valor da variavel b é: " << b << endl;
    cout << "O valor da variavel c é: " << c << endl;
    cout << "O valor da variavel d é: " << d << endl;
    cout << "Memoria da variavel a: " << sizeof(a) << " bytes" << endl;
    cout << "Memoria da variavel b: " << sizeof(b) << " bytes" << endl;
    cout << "Memoria da variavel c: " << sizeof(c) << " bytes" << endl;
    cout << "Memoria da variavel d: " << sizeof(d) << " bytes" << endl;

    return 0;

}