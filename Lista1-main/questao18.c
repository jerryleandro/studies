//Questão 18 - Crie uma função capaz de realizar multiplicação matricial da forma C=A B. A função deve
//receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
//e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
//de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
//sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
//função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.


#include <stdio.h>
#include <stdlib.h>

void multiplicartMatriz(int **n1 , int **n2, int **n3, unsigned int lN1 , unsigned int cN1 , unsigned int cN2){

    int aux ;
     for(int i = 0; i< lN1 ; i++){
         for(j = 0; j< cN2; j++){
             n3[i][j] = 0;
             aux = 0;
             for(int u = 0; u < cN1 ; u++){
                 aux = aux + n1[i][u]*n2[u][j];
             }
             n3[i][j] = aux;
         }
     }
}

int main(){
    unsigned int lN1 , cN1 , lN2 , cN2;
    int **n1 , **n2, **n3;

    printf("informe o numero de linhas da primeira matriz ");
    scanf("%d", &lN1);
    printf("informe o numero de colunas da primeira matriz ");
    scanf("5d", &cN1);

    printf("o numero de linhas da segunda matriz e igual ao numero de colunas da primeira matriz = %d", cN1);

    cN2 = lN1;

    printf("informe o numero de colunas da segunda matriz ");
    scanf("%d", &cN2);
    
    
    n1 = malloc(lN1 * sizeof(int*));
    for (int i=0; i<lN1; i++){
        n1[i] = malloc(cN1 * sizeof(int));
    }

    n2 = malloc(lN2 * sizeof(int*));
    for (int i=0; i<lN2; i++){
        n2[i] = malloc(cN2 * sizeof(int));
    }

    n3 = malloc(lN1 * sizeof(int*));
    for (int i=0; i<lN1; i++){
        C[i] = malloc(cN2 * sizeof(int));
    }


    printf("informe valores para a primeira matriz ");
    for(int i = 0; i < lN1 ; i++){
        for(int j = 0; j < cN1 ; j++){
            printf("\n n1[%d][%d] = ", i , j);
            scanf("%d", &n1[i][j]);
        }
    }

    printf("informe valores para a segunda matriz ");
    for(int i = 0; i < lN2 ; i++){
        for(int j = 0; j < cN2 ; j++){
            printf("\n n2[%d][%d] = ", i , j);
            scanf("%d", &n2[i][j]);
        }
    }

    multiplicartMatriz(n1 , n2, n3 , lN1,cN1,cN2);

    printf("Resultado da multiplicação \n");
    
    for(int i = 0; i < lN1;i++){
        for(int j = 0; j < cN2;j++){
            printf("\n n3[%d][%d] = ", i , j);
            printf("%d", n3[i][j]);
        }
    }

    return 0;
}