//Para compilar o código, basta pressionar F6. Extensão C++ Compile Run.
//A instrução #include diz importar o arquivo cujo nome está na sua frente
#include <iostream> //biblioteca padrão
#include <stdlib.h> //biblioteca que permite a pausa 

//Definimos o namespace agora para não precisar a todo momento se referir a ele
//Pode pensar namespace como o caminho para o std (ou outro arquivo). Como se fosse um PATH.
//std vem de standard, ou seja, padrão. 
using namespace std; //Instrução using diz que vamos utilizar um namespace de nome std

//Todo programa em C++ sempre começa peça função main()
//int diz que a função pode retornar um valor do tipo inteiro
//Par de chavez é chamado de bloco de instrução
int main() {
    //cout significa console output. É o DOS. 
    //Operador de inserção é <<
    cout << "Hello World!\n"; //Objeto cout deve receber a frase. 
    system("pause"); //Pausa para que a janela não feche rapidamente
    return 0; //a função tem que retornar algo
    

}
