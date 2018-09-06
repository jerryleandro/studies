# Lista de exercícios - 2

1. Implemente um programa que:
a) Declare um vetor de inteiros com 12 posições.
b) A primeira, terceira e décima posições do vetor devem receber o valor 108.
c) A segunda posição deve receber o valor da primeira posição menos 8. E a
quarta posição deve receber o valor da terceira posição mais 6.
d) A posições de índice par a partir da quinta posição devem receber, na ordem: 11,
32, 33 e 87.
e) As posição 5 deve guardar 5 mais 3 vezes o valor da sétima posição. A posição 7
deve guardar este valor mais 10.
f) O valor 72 deve ser inserido na posição dada pelo valor da quinta posição.
g) A posição 4 recebe o valor da oitava posição.
h) Troque os valores da sexta e décima primeira posições.
i) Troque os valores das posições 0 e 8.
j) Escreva todas as posições do vetor de trás para frente usando o casting para
caractere e observe o resultado.

Item j (RESPOSTA)
for(int i=11; i>=0; i++){
cout << char(v[i]);
}

2. Implemente um programa que recebe do usuário um vetor de inteiros. Em seguida o
programa deve receber um número natural N entre 0 e 9 e determinar em quais posições do
vetor N ocorre.

```
Exemplo
Entrada: V = [2 , 4, 5, 1, 2, 3, 2, 6] N=2
Saída: Posições 0 4 6
```

3. Implemente um programa que recebe do usuário um vetor de inteiros. Em seguida o
programa deve verificar quantas vezes o elemento é exatamente igual ao índice da posição em
que ele se encontra.

```
Exemplo
Entrada: V = [0 , 4, 5, 3, 2, 5, 2, 6]
Saída: 3
```

4. Implemente um programa que recebe um número positivo ímpar N (N >= 3) referente a
quantidade de elementos de um vetor de inteiros. Em seguida o programa deve receber o
vetor, calcular e imprimir:

 a) O produto dos números que estão na primeira posição, na posição do meio e na última
posição do vetor.
 b) A média dos números que estão em posições inferiores à posição do meio do vetor.
 c) Quantos dos números que estão em posições superiores à posição do meio do vetor são
divisíveis por 5 mas não por 2.
