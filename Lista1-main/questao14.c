//Questão 14 - Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
//código, explicando o que faz cada uma das linhas.

#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) { // a função comparador é a responsável por determinar a ordem dos elementos. 
     return ( *(int*)a - *(int*)b );           //Da maneira como é determinado o valor de retorno, ela fará a ordenação de forma crescente 
                                                //dos valores do array. Se eu inverter as variáveis “a” e “b” na operação,
                                                // fazendo *(int*)b – *(int*)a, isso fará com que o vetor passe a ser ordenado de forma decrescente.
                                                // Retirado de = http://www.galirows.com.br/meublog/programacao/utilizacao-funcao-qsort/
 
}

int main(){

    unsigned int tam;                           // definindo a variavel que vai ficar responsavel por guarda o tamanho do vetor, declarando ela para não receber valores negativos pq não pode ter valores negativos como tamanho 
    printf ("Informe o tamanho do vetor : \n");  // pedindo pro usuario informar o tamanho do vetor 
    scanf ("%d", &tam);                           // guardando o que o usuario informou na variavel tam 
    float *vet;                                   // aq e definindo o ponteiro como um tipo float                           
    vet = malloc(tam * sizeof(float));            // aq e pra alocação dinamica de memoria, ele vai guardar um valor n do tipo float informado pelo usuario 

  
        for (int i=0; i< tam ; i++){                      // for que vai ser usado pra atribuir os valores que o usuario informou a cada possição do vetor 
            printf ("Informe valores para o vetor - \n");   // pedindo pro usuario começar a informar os valores pro vetor    
            scanf ("%f", &vet[i]);                 // salvando nas possiçõs do vetor a cada interação do for os valores que o usuario digitar no teclado
        }

    qsort(vet, tam, sizeof(float), comparador);   // ussando a função de ordenação padrão do c para ordenar os valores 

    printf ("Vetor em ordem crescente '-' : \n");  
    for (int i=0; i < tam ; i++){                    // for que vai servir pra percorrer todos os valores do vetor para mostra ele na tela 
        printf ("Posicao %d do vetor e : %f \n",i, vet[i]); // mostrando os valores de forma crescente do vetor 
    }

    return 0;
}