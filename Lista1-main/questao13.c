//Questão 13 - Implemente em linguagem C uma função em um programa de computador que leia n valores do
//tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
//realizar a tarefa.

#include <stdio.h>
#include <stdlib.h>

void cresente(int tam, float *vet){
    for (int i=0; i<tam; i++)    {
            for (int j=0 ; j < tam-1 ; j++){
                if(vet[j] > vet[j+1]){
                    float aux;
                    aux=vet[j];
                    vet[j] = vet[j+1];
                    vet[j+1] = aux;
                }

            }
    }
}

int main(){

    unsigned int tam;
    printf ("Informe o tamanho do vetor : \n");
    scanf ("%d", &tam);
    float *vet;
    vet = malloc(tam * sizeof(float));

   
        for (int i=0; i< tam ; i++){
             printf ("Informe valores para o vetor - \n");
            scanf ("%f", &vet[i]);
        }

    cresente(tam,vet);

    printf ("Vetor em ordem crescente '-' : \n");
    for (int i=0; i < tam ; i++){
       printf ("posicao %d do vetor e : %f \n",i, vet[i]);
    }

  
    return 0;
}

   