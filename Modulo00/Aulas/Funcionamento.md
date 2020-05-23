Maria Beatriz Ramos Florencio - Ano de 2020 - Estudonauta
# ANOTAÇÕES DA AULA - Módulo Primeiros Passos

# Funcionamento da linguagem

A linguagem C trabalha com o baixo nível

- Código Fonte: Alto nível. Nossa linguagem.
- Código Objeto: Baixo nível.
- Linguagem de Máquina: Linguagem do computador.

## Primeiro passo: Compilação

Essa tarefa consiste na conversão do código fonte para objeto. Compilar é fazer a análise do código fonte, verificar erros de sintaxe, erros de semântica.

O resultado da compilação é o código objeto, baixo nível. Nem a máquina está entendendo ele e nem você. É o meio do processo, está sendo mastigado.

## Segundo processo: Montagem ou Assembly

Com o código objeto pronto, você pode passar por um processo chamado montagem, passando seu código para o código de máquina, gerar o executável.

# Vantagem: Multiplataforma da linguagem C

Possui várias maneiras de compilar, existem compiladores para cada tipo de computador. Pode pegar o mesmo fonte, na maioria das vezes sem alteração nenhuma entre eles e passar por compiladores diferentes. Esses compiladores vão gerar códigos objetos diferentes e esses objetos, uma vez montados pelo *Assembler* da plataforma, podem gerar sistemas em plataformas diferentes.

Um mesmo código fonte pode ser compilado de três maneiras diferentes, em três computadores diferentes, gerar códigos objetos diferentes, montar o código e gerar códigos de máquia/programas executáveis no Windows, no Linux e no MacOS, por exemplo.

