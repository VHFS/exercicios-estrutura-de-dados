#include <stdlib.h>
#include <stdio.h>

/*Explique a diferenša entre:
p++; (*p)++; *(p++);*/

int main(){
	//Incrementa o enderešo do ponteiro.
	p++;
	
	//Incrementa o valor contido no enderešo apontado por p.
	(*p)++;
	
	//Incremento o enderešo de p e acessa o novo valor.
	*(p++);
	
	return 0;
}
