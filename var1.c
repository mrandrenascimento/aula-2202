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
int main(){
	int i;
	int numero;
	printf("Digite um Número: ");
	scanf("%d",&numero);
	for (i=1;i<=10;i++){
		printf("%d*%d=%d \n",numero,i,numero*i);	}
return 0;		
}

