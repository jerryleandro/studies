//Questão 11. Suponha que as seguintes declarações tenham sido realizadas:

// Identifique quais dos seguintes comandos é válido ou inválido:

int main(){

float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;


	aloha[2] = value;	// Tudo Certo Nada Errado 
	
	scanf("%f", &aloha); 	// Tudo certo mais se o vetor não for preenchido bem provavel que apareça lixo na saida  

	aloha = value";	// Tá errado por que a vaviável e um vetor então tem que passar a possição do valor no vetor, e ta faltando fecha essa aspa ai.

	printf("%f", aloha); // Tudo Certo Nada Errado

	coisas[4][4] = aloha[3];// Tudo Certo Nada Errado

	coisas[5] = aloha;	// Ta errado pode atribuir um vetor a uma posição de outro vetor não por que cada posição do vetor se comporta como uma vaviavel simples e não como um vetor 	

	pf = value;		// Tá errado pf e um ponteiro pode receber numero quebrado não 

	pf = aloha;		// Tudo Certo Nada Errado
    }