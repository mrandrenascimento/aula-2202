#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Bibliotecas
#include<string.h>
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
void verificarParouimpar(int numero){
	if(numero%2==0) printf("Par");
	else
	printf("impar");
}
int main(){
	int numero;
	printf("Digite um Número: ");
	scanf("%d",&numero);
	
	printf("\nVERIFICAR PAR OU MIMPAR\n ");
	verificarParouimpar(numero);
	return 0;
}
