//Questão 17 - Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
//outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
//se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
//5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
//argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.

#include <stdio.h>
#include <stdlib.h>

void somaVet (float *n1, float *n2 , float *n3 , unsigned int tam){
    for (int i = 0; i < tam ; i++){
        n3[i] = n1[i] + n2[i];
    }


}

int main(){
    unsigned int tam; 
    float *n1 , *n2 , *n3;

        printf("informe o tamanho dos vetores ");
        scanf("%d", &tam);

        n1 = malloc(tam * sizeof(float));
        n2 = malloc(tam * sizeof(float));
        n3 = malloc(tam * sizeof(float));

        for(int i =0; i < tam ; i++){
            printf("informe valores para a posicao %d do vetor 1", i);
            scanf("%f",&n1[i]);
        }

        for(int i =0; i < tam ; i++){
            printf("informe valores para a posicao %d do vetor 2", i);
            scanf("%f",&n2[i]);
        }

        somaVet(n1,n2,n3,tam);

        printf("resultado do vetor 3 que e a soma de vetor 1 + vetor 2 \n");

        for(int i = 0; i< tam ; i++){
            printf("%f ", n3[i]);
        }

        return 0;
}