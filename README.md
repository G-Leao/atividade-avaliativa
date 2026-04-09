# atividade-avaliativa
ex1.c – Inversão de Palavras
Programa que realiza a leitura de três palavras fornecidas pelo usuário e as exibe na ordem inversa da entrada.
Este exercício tem como objetivo reforçar conceitos básicos de entrada e saída de dados em C, além da manipulação de strings. Também trabalha a organização lógica dos dados e o controle da ordem de exibição.

ex2.c – Vetor em Ordem Inversa
Programa que solicita ao usuário a entrada de 5 números inteiros, armazena esses valores em um vetor e, posteriormente, exibe os elementos na ordem inversa.
O principal objetivo é praticar o uso de vetores (arrays), laços de repetição e manipulação de índices, fundamentais na programação estruturada.

ex3.c – Multiplicação de Matriz
Programa que lê os valores de uma matriz 3x3 e multiplica cada elemento por um valor fixo (5), exibindo a matriz resultante.
Este exercício reforça o conceito de matrizes bidimensionais, percorrendo linhas e colunas com estruturas de repetição, além de operações matemáticas aplicadas em cada elemento.

ex4.c – Operações com Matriz Identidade
Programa que lê uma matriz 3x3 e trabalha com a construção de uma matriz identidade. Dependendo da implementação, pode realizar operações entre a matriz original e a matriz identidade.
O foco está na compreensão de matrizes especiais, como a matriz identidade, e no desenvolvimento de lógica para manipulação de dados em estruturas bidimensionais.

ex5.c – Multiplicação de Vetor por Matriz
Programa que realiza a multiplicação de um vetor por uma matriz 3x3, gerando um vetor resultante.
Este exercício explora conceitos matemáticos aplicados à programação, além de exigir uma boa compreensão de índices, loops aninhados e organização lógica para cálculo correto dos resultados.

ex6.c – Cadastro de Alunos com Struct
Sistema simples de cadastro de até 10 alunos utilizando estruturas (struct). O programa armazena dados como nome e notas, calcula a média de cada aluno e os classifica em aprovados ou reprovados.
O objetivo é introduzir o uso de estruturas para organização de dados complexos, além de trabalhar com vetores de structs, condições lógicas e processamento de informações.

ex7.c – Cadastro e Busca de Livros
Programa que cadastra informações de até 5 livros (título, autor e ano de publicação) e permite ao usuário realizar buscas por título.
Este exercício reforça o uso de estruturas, manipulação de strings (comparação) e implementação de uma busca simples em um conjunto de dados.

ex8.c – Uso de Ponteiros
Programa que lê 5 números inteiros utilizando ponteiros e exibe o dobro de cada valor informado.
O foco principal é a introdução e prática com ponteiros em C, incluindo acesso indireto a variáveis e manipulação de memória.

ex9.c – Ordenação com Ponteiros
Programa que recebe três números, realiza a ordenação em ordem crescente utilizando ponteiros e verifica se os valores são iguais entre si.
Este exercício combina lógica de ordenação com manipulação de ponteiros, reforçando conceitos importantes de comparação e troca de valores na memória.

ex10.c – Alocação Dinâmica e Maior Nota
Programa que realiza o cadastro dinâmico de alunos utilizando alocação de memória (malloc). Após o cadastro, o sistema identifica e exibe o aluno com a maior nota.
Este é um exercício mais avançado, com foco em gerenciamento de memória, uso de ponteiros, estruturas e processamento de dados, sendo essencial para compreensão de conceitos mais profundos da linguagem C.


  DESAFIO 1
Este programa implementa uma validação de expressões com parênteses, chaves e colchetes, utilizando a estrutura de dados pilha (stack).
A lógica funciona da seguinte forma:
Cada símbolo de abertura (, { ou [ é empilhado.
Quando um símbolo de fechamento aparece, o programa verifica se ele corresponde corretamente ao último símbolo aberto (topo da pilha).
Caso haja inconsistência ou tentativa de desempilhar uma pilha vazia, a expressão é considerada inválida.
Ao final, se a pilha estiver vazia, a expressão é válida; caso contrário, é inválida.
  Conceitos aplicados:
Estrutura de dados: Pilha
Alocação dinâmica de memória
Manipulação de strings
Validação de sintaxe

  DESAFIO 2
Este programa realiza a inversão de uma string utilizando uma pilha encadeada.
Funcionamento:
O usuário digita uma palavra.
Cada caractere é inserido na pilha.
Em seguida, os caracteres são removidos da pilha e exibidos, resultando na string invertida.
Esse comportamento ocorre porque a pilha segue o princípio LIFO (Last In, First Out).
  Conceitos aplicados:
Pilha (LIFO)
Estrutura encadeada
Manipulação de strings
Uso de malloc e free

  DESAFIO 3
Este programa simula uma fila de atendimento de clientes, calculando o tempo de espera de cada cliente.
Como funciona:
O usuário informa quantos clientes serão atendidos.
Para cada cliente, são cadastrados:
ID
Tempo de atendimento
Os clientes são atendidos na ordem de chegada (FIFO).
O programa calcula e exibe o tempo de espera acumulado de cada cliente.
Também inclui uma função de validação de entrada para evitar erros ao digitar dados.
  Conceitos aplicados:
Fila (FIFO)
Estruturas encadeadas
Validação de entrada
Simulação de processos reais

   DESAFIO 4
Este programa implementa uma fila de prioridade para impressão de documentos.
Funcionamento:
Cada documento possui:
ID
Número de páginas
Prioridade (quanto menor o número, maior a prioridade)
Os documentos são inseridos na fila de forma ordenada, respeitando a prioridade.
Na hora da impressão, os documentos são removidos da fila já na ordem correta.
  Diferencial: Diferente de uma fila comum, aqui a inserção já organiza os elementos, garantindo eficiência na remoção.
  Conceitos aplicados:
Fila de prioridade
Lista encadeada ordenada
Alocação dinâmica
Simulação de sistema de impressão


USAMOS
Vetores
Matrizes
Structs
Ponteiros


