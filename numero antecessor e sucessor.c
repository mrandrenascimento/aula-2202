#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
int main(){
	
	int numero;
	cabecalho();
	printf("Digite um Número: ");
	scanf("%i",&numero);
	cabecalho();
	printf("Numero Antecessor: %i \n",numero-1);
	printf("Numero Sucessor: %i \n",numero+1);
	return 0;
}
