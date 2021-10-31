//Questão 16 - Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
//computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
//lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
//Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
//das implementações que você criou para os dois problemas de ordenação anteriores e compare
//os resultados obtidos.

//Questão 15 - Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
//de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para
//a função de comparação
//~referencia = https://en.cppreference.com/w/c/chrono/clock_t

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
int comparadorQsort(const void * a, const void * b){
     return ( *(int*)a - *(int*)b );
}

int main(){

    unsigned int tam;
    printf ("Informe o tamanho do vetor : \n");
    scanf ("%d", &tam);
    float *vet , *vetaux;
    double tempo1 = 0, tempo2 = 0;
    vet = malloc(tam * sizeof(float));
    vetaux = malloc(tam *  sizeof(float));
   
        for (int i=0; i< tam ; i++){
             printf ("Informe valores para o vetor - \n");
            scanf ("%f", &vet[i]);
        }

        for (int i = 0; i < tam ; i++){
            vetaux[i] = vet[i];
        }

   int(*pontAux)( float*,  float*) = comparador;
   
    clock_t tempon1 = clock();

    cresente(tam,vet, pontAux );

    clock_t tempov1 = clock();

    clock_t tempon2 = clock();

    qsort(vetaux , tam , sizeof(float), comparadorQsort);

    clock_t tempov2 = clock();
    
    tempo1 = (tempov1 - tempon1);
    tempo2 = (tempov2 - tempon2);

    printf ("Vetor em ordem crescente '-' : \n");
    for (int i=0; i < tam ; i++){
       printf ("posicao %d do vetor e : %f \n",i, vet[i]);
    }

    printf("O tempo que a funcao comparador levou foi : %lf", tempo1);
    printf("O que a funcao padrao do c qsort foi : %lf", tempo2);
    return 0;
}

   