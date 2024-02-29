#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>
void cabecalho(){
	setlocale(LC_ALL,"");
	system("cls\\clear");
	printf("\n\tSENAI DENDEZEIRO\n");
	fflush(stdin);
}
int main(){
	
	float umNumero, reajuste, total;
	cabecalho();
	printf("\nInforme um Valor: ");
	scanf("%f",&umNumero);
	
	reajuste=umNumero*0.1;
	total=umNumero+reajuste;
	
	cabecalho();
	printf("\nTota Valor: %.2f \n",total);
	
	return 0;
}