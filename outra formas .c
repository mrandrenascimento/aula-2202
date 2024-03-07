
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Bibliotecas
#include <string.h>
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
char* verificarParouimpar(int numero){
	char resposta[200];
	if(numero % 2 == 0)
	strcpy(resposta,"Par.");
	else strcpy(resposta, "Impar.");
return resposta;
}
int main(){
	int numero;
	char resultado[200];
	
	printf("Digite um Número: ");
	scanf("%i",&numero);
	
	// resultado= verificarparouimpar (numero);
	strcpy(resultado,verificarParouimpar(numero));
	
	printf("Resultado: %s \n",resultado);
	
return 0;

}
