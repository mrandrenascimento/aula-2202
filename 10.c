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
	printf("Digite o Primeiro N�mero: ");
	scanf("%f",&primeiNumero);
	printf("Digite o Segundo N�mero: ");
	scanf("%f",&segundoNumero);
	
	// calculo
	cabecalho();
	soma=primeiNumero+segundoNumero;
	multiplicacao=primeiNumero*segundoNumero;
	cabecalho();
	printf("Primeiro N�mero: %f \n",primeiNumero);
	printf("Segundo N�mero: %f \n", segundoNumero);
	printf("Soma: %f \n", soma);
	printf("Multiplica��o: %f \n",multiplicacao);
	printf("M�dia: %f \n",media);
	if(primeiNumero==segundoNumero){
		printf("valores iguais");
	}
}

