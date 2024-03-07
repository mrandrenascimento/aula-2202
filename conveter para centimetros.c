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
float converterparacentimetros(int numero){

return numero*100;
}

int main (){

float numero, resultado;

printf("Digite um valor: ");
scanf("%f",&numero);

resultado=converterparacentimetros(numero);

printf("Valor em cm: %.1f \n", resultado);


return 0 ;

}

