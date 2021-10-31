//Questão 10: Implemente um programa de computador para testar estas suposições e compare as respostas
//oferecidas pelo programa com as respostas que você idealizou.

int main(){
 	 char v1[4] = {"4233"};
 	 int v2[4] = {4,9,13, 49};
 	 float v3[4] = {4,9,13, 49};
 	 double v4[4] = {4,9,13, 49};
 	 int i ;


 	 for(i=0;i<4;i++){
  	  printf(" Resultado do Tipo Char --  x + %d = %p \n",i+1 ,(v1+i));
 	}
 	 for(i=0;i<4;i++){
  	  printf(" Resultado do Tipo Int --  x + %d = %p \n",i+1 ,(v2+i));
 	 }
 	 for(i=0;i<4;i++){
  	  printf("Resultado do  Tipo Float --  x + %d = %p \n",i+1 ,(v3+i));
 	 }
 	 for(i=0;i<4;i++){
 	   printf("Resultado do tipo double --  x + %d = %p \n",i+1 ,(v4+i));
 	 }
	}


