Maria Beatriz Ramos Florencio - Ano de 2020 - Estudonauta
# ANOTAÇÕES DA AULA - Módulo Primeiros Passos

# HISTÓRIA DA LINGUAGEM C

## Ano de 1966

Existia uma linguagem chamada BCPL. Ela foi inspirada na linguagem ALGOL.

Linguagem BCPL 
- Parte Simples
- Parte complexa

A parte complexa incomodava muitas pessoas. 

## Ano de 1969

Pesquisador de uma empresa de telecomunicações dos EUA, Ken Thompson, desenvolveu uma nova linguagem de programação. Inspirou-se na BCPL, mas reestruturou a parte complexa dessa linguagem e construiu uma nova.

Linguagem B
- Evolução da BCPL
- Simplificação da BCPL

## Sistema Operacional Unificado

Dois pesquisadores e colegas de trabalho da Bell Labs estavam juntos num projeto de desenvolvimento de um sistema operacional único para máquinas.

Esse sistema se chama UNIX. O núcleo dele estava sendo desenvolvido em Assemble, uma linguagem de baixo nível e complicada de se trabalhar.

Então eles pensaram: E se nós melhorarmos a linguagem B para que o próprio núcleo do UNIX fosse escrito em B?

Então o Dennis Ritchie assumiu o compromisso de melhorar a linguagem B de tal modo que ela conseguisse conversar mais perto da máquina. Dessa forma, não utilizariam mais a linguagem Assemble, mas sim a *New B*. 

Linguagem NB
- Evolução da B
- Acesso a um nível mais baixo

Porém, o nome não ficou como NB. O Dennis Ritchie pensou: Se BCPL reduzido foi B e eu estou criando um novo B, não vou chamar de *New B*, vou chamar de **C**.

## Biblioteca importante

O UNIX estava sendo desenvolvido num computador PDT11. Os dois pesquisadores tinham de fazer portes para outros sistemas, mas outros sistemas têm outras formas de trabalhar. 

Eles tinham a entrada e saída básica do PDT11, mas se eles utilizassem elas em outro computador, não funcionaria. Dessa forma, o Michael Lesk entrou no projeto.

A missão dele foi fazer com que a entrada e saída de qualquer sistema fossem atentidas. 

Para isso, ele criou uma biblioteca muito importante chamada *Standard I/O*. Ela é essencial para todo programa em linguagem C.

## Manual da linguagem

Dennis Ritchie e Brian Kernighan se juntaram para criar um manual da linguagem C. Isso porque a linguagem precisava ser difundida, ser conhecida e as pessoas precisariam de entender como ela funciona.

Eles escreveram um livro chamado *The Programming Language C*.