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
	
	float primeiNumero, segundoNumero, media, soma, multiplicacao, maiorValor, menorValor;
	
	cabecalho();
	printf("Digite o Primeiro Número: ");
	scanf("%f",&primeiNumero);
	printf("Digite o Segundo Número: ");
	scanf("%f",&segundoNumero);
	
	// calculo
	cabecalho();
	soma=primeiNumero+segundoNumero;
	multiplicacao=primeiNumero*segundoNumero;
	cabecalho();
	printf("Primeiro Número: %f \n",primeiNumero);
	printf("Segundo Número: %f \n", segundoNumero);
	printf("Soma: %f \n", soma);
	printf("Multiplicação: %f \n",multiplicacao);
	printf("Média: %f \n",media);
	if(primeiNumero==segundoNumero){
		printf("valores iguais");
	}
}

