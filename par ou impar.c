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
	printf("lista de numeros pares");

	for (i=100;i<=120;i++){
		if(i % 2==0){
			printf("%d \n",i);
		
}}
return 0;		
}

