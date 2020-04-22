#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int A = 0;
    short int B = 0;
    unsigned int C = 0;
    long int D = 0;

    cout << "O int ocupa " << sizeof(A) << "B" << endl;
    cout << "O short int ocupa " << sizeof(A) << "B" << endl;
    cout << "O unsigned int ocupa " << sizeof(B) << "B" << endl;
    cout << "O long int ocupa " << sizeof(C) << "B" << endl;
    cout << "\n";

    return 0;
}