//Questão 15 - Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
//de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para
//a função de comparação

#include <stdio.h>
#include <stdlib.h>

int comparador(float *a, float *b) { 
             
     if ( *a < *b ) return 0;
     if ( *a > *b ) return 1;                                            
}

void cresente(int tam, float *vet , int(*pontAux)( float*,  float*)){
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

   int(*pontAux)( float*,  float*) = comparador;
    cresente(tam,vet, pontAux );

    printf ("Vetor em ordem crescente '-' : \n");
    for (int i=0; i < tam ; i++){
       printf ("posicao %d do vetor e : %f \n",i, vet[i]);
    }
    return 0;
}

   