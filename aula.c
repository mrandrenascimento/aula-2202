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
float  calcularMedia(float n1, float n2){
	float media;
	media= (n1+n2)/2;
	return media;
}
int main(){
	float primeiroNumero, segundoNumero;
	float media;
	
	
	printf("Digite o Primeiro Número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o Segundo numero: ");
	scanf("%f",&segundoNumero);
	
	media=calcularMedia(primeiroNumero,segundoNumero);
	
	printf("\nMédia: %.2f",media);
return 0;
}
