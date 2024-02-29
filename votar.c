#include <stdio.h>
#include <stdlib.h>
//Bibliotecas
#include <locale.h> 
#include<string.h>
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
int main(){
	int idade;
	cabecalho();
	printf("Digite sua Idade: ");
	scanf("%i",&idade);
	
	cabecalho();
	if(idade<18 || idade>65){
		printf("\n\tNão é Obrigado a Votar");
	}
	else {
		printf("\n\t VOTAR");
	
	}
return 0;
}

