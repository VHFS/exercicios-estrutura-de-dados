#include <stdlib.h>
#include <stdio.h>

int main(){
/*Fa�a um programa que leia um valor inteiro n e crie dinamicamente um vetor de n elementos
do tipo inteiro. Em seguida o programa deve ler os elementos desse vetor. Depois, o vetor
preenchido deve ser impresso. Al�m disso, antes de finalizar o programa, deve-se liberar a �rea
de mem�ria alocada.*/
	
	
	int n = 0, *p;
	int cont = 0;
	
	printf("Qual o tamanho do vetor:\n", n);
	scanf("%i",&n);
	

	p=(int*)malloc(sizeof(int)*n);
	
	printf("Vetor de %i espacos criado.\n", n);

	printf("Quais os elementos do vetor.\n", n);	
	for(cont; cont < n; cont++){
		printf("", n);	
		scanf("%i",	p+cont );	
	}
	
	
	for(cont=0; cont < n; cont++){
		printf("\nVetor %i: ", cont);
		printf("%i\n",*(p+cont));	
	}
	
	free(p);
	return 0;
}
