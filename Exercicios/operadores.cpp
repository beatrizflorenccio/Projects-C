#include <iostream>
#include <stdlib.h>

//Operador para a esquerda << (inserção) diz que vamos enviar uma info para o console
//Operador para a direita >> (extração) diz que vamos receber infos do usuário 

using namespace std;

int main() {
    cout << "Digite um numero: ";
    int num1 = 0;
    cin >> num1;
    cout << "Digite outro numero: ";
    int num2 = 0;
    cin >> num2;

    cout << "Os numeros digitados foram: " << num1 << " e " << num2 << endl; 
    cout << "A soma entre os numeros vale: " << num1 + num2 << endl;

    return 0;

}